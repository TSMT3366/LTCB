#include <stdio.h>
#include <stdlib.h>

void input(int *a) {
    printf("Ban hay nhap mot so nguyen duong n: ");
    scanf("%d", a);
    while (*a <= 0) {
        printf("\nGia tri khong hop le.\nVui long nhap lai: ");
        scanf("%d", a);
    }
}

void dec_to_bin(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

void dec_to_oct(int n) {
    int a[32] = {0};
    int r, i = 0;
    while (n != 0) {
        r = n % 8;
        a[i++] = r;
        n /= 8;
    }
    for (int j = 31; j >= 0; j--) {
        printf("%d", a[j]);
    }
    printf("\n");
}

void dec_to_hex(int n) {
    char a[32] = {0};
    char b[] = "0123456789ABCDEF";
    int r, i = 0;
    while (n != 0) {
        r = n % 16;
        a[i++] = b[r];
        n /= 16;
    }
    printf("%032s\n",a);
}

int main() {
    int n;
    input(&n);
    dec_to_bin(n);
    dec_to_oct(n);
    dec_to_hex(n);
    return 0;
}