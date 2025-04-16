#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char HoTen[101];
    int Tuoi;
    double DTB;
} SinhVien;

typedef struct Node
{
    SinhVien data;
    struct Node *next;
} Node;

typedef struct
{
    Node *first;
    Node *last;
} LinkedList;

Node *prevNode;

LinkedList* createList()
{
    LinkedList *list= (LinkedList*)malloc(sizeof(LinkedList));
    list->first = NULL;
    list->last = NULL;
    return list;
}

Node* createNode(SinhVien data)
{
    Node *node=(Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void add1stNode(LinkedList *list, Node *node)
{
    list->first = node;
    list->last = node;
}

void addToLast(LinkedList *list, Node *node)
{
    list->last->next=node;
    list->last=node;
}

void inputSinhVien(SinhVien *sv)
{
    printf("Ho va Ten: ");
    fgets(sv->HoTen, 101, stdin);
    sv->HoTen[strcspn(sv->HoTen, "\n")] = '\0';
    printf("Tuoi: ");
    scanf("%d", &sv->Tuoi);
    getchar();
    printf("Diem trung binh: ");
    scanf("%lf", &sv->DTB);
    getchar();
}

Node* searchSinhVien(LinkedList *list, char *Ten)
{
    Node *node = list->first;
    prevNode == NULL;
    while (node!=NULL)
    {
        if (strcmp(node->data.HoTen, Ten) == 0)
        {
            return node;
        }
        prevNode = node;
        node = node->next;
    }
    return NULL;
}

void ChenSinhVien(LinkedList *list, char *Ten)
{
    Node *foundNode = searchSinhVien(list, Ten);
    if (foundNode == NULL)
    {
        printf("Khong ton tai sinh vien.\n");
    }
    else
    {   
        printf("Thong tin sinh vien moi:\n");
        SinhVien sv;
        inputSinhVien(&sv);
        Node *SinhVienMoi = createNode(sv);
        SinhVienMoi->next = foundNode;
        if (prevNode != NULL)
        {
            prevNode->next = SinhVienMoi;
        }
        else
        {
            list->first = SinhVienMoi;
        }
    }
}

void BoSinhVien(LinkedList *list, char *Ten)
{
    prevNode = NULL;
    Node *foundNode = searchSinhVien(list, Ten);
    if (foundNode == NULL)
    {
        printf("Khong ton tai sinh vien.\n");
    }
    else
    {   
        if (prevNode != NULL)
        {
            prevNode->next = foundNode->next;
        }
        else
        {
            list->first = foundNode->next;
        }
        free(foundNode);
    }
}

void printList(LinkedList *list)
{
    printf("%5s %20s %10s %10s \n", "STT", "Ho ten", "Tuoi", "Diem TB");
    Node *node = list->first;
    int i=1;
    if (list->first == NULL)
    {
        printf("Danh sach trong!\n");
    }
    while (node != NULL)
    {
        printf("%5d %20s %10d %10.2f \n", i, node->data.HoTen, node->data.Tuoi, node->data.DTB);
        i++;
        node = node->next;
    }
}

void inputList(LinkedList *list, int n)
{
    int i;
    Node *node;
    SinhVien SinhVienBuffer;
    printf("Sinh vien 1:\n");
    inputSinhVien(&SinhVienBuffer);
    node = createNode(SinhVienBuffer);
    add1stNode(list, node);
    for (i=1; i<n; i++)
    {
        printf("Sinh vien %d:\n", i+1);
        inputSinhVien(&SinhVienBuffer);
        node = createNode(SinhVienBuffer);
        addToLast(list, node);
    }
}

int main()
{
    LinkedList *list = createList();
    char Ten[101];
    int n;

    int i = -1;
    while (i != 0)
    {
        printf("Chon chuong trinh:\n1. Tao danh sach moi\n2. In danh sach.\n3. Chen sinh vien.\n4. Bo sinh vien.\n0. Thoat chuong trinh\n");
        scanf("%d", &i);
        getchar();
        switch(i)
        {
            case 1:
            {
                printf("Nhap so luong sinh vien can nhap: ");
                scanf("%d", &n);
                getchar();
                inputList(list, n);
                break;
            }
            case 2:
            {   
                printList(list);
                break;
            }
            case 3:
            {
                printf("Can chen truoc sinh vien nao? \n");
                fgets(Ten, 101, stdin);
                Ten[strcspn(Ten, "\n")] = '\0';
                ChenSinhVien(list, Ten);
                break;
            }
            case 4:
            {
                printf("Ten sinh vien can bo: ");
                fgets(Ten, 101, stdin);
                Ten[strcspn(Ten, "\n")] = '\0';
                BoSinhVien(list, Ten);
                break;
            }
            case 0: 
            break;
            default:
            {
                printf("Khong ton tai lua chon\n");
            }
        }
    }
    return 0;
}