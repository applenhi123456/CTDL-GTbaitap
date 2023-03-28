#include <stdio.h>

struct DonThuc {
    float a;
    int n;
};

void nhapDonThuc(struct DonThuc* dt) {
    printf("Nhap he so a: ");
    scanf("%f", &dt->a);
    
    printf("Nhap so mu n: ");
    scanf("%d", &dt->n);
}

void xuatDonThuc(struct DonThuc dt) {
    printf("%0.2fx^%d", dt.a, dt.n);
}

int main() {
    struct DonThuc dt1;
    
    printf("Nhap thong tin cho don thuc:\n");
    nhapDonThuc(&dt1);
    
    printf("Don thuc vua nhap la: ");
    xuatDonThuc(dt1);
    
    return 0;
}
