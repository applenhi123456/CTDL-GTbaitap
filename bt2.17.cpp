#include <stdio.h>

int tinhTong(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * n + tinhTong(n - 1);
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong S(%d) = %d\n", n, tinhTong(n));
    return 0;
}
