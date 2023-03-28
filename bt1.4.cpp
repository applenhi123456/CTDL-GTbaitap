#include <stdio.h>

struct Diem {
    float x;
    float y;
    float z;
};

void nhapDiem(struct Diem* d) {
    printf("Nhap toa do x: ");
    scanf("%f", &d->x);
    
    printf("Nhap toa do y: ");
    scanf("%f", &d->y);
    
    printf("Nhap toa do z: ");
    scanf("%f", &d->z);
}

void xuatDiem(struct Diem d) {
    printf("(%0.2f, %0.2f, %0.2f)", d.x, d.y, d.z);
}

int main() {
    struct Diem d1;
    
    printf("Nhap toa do cho diem:\n");
    nhapDiem(&d1);
    
    printf("Toa do cua diem la: ");
    xuatDiem(d1);
    
    return 0;
}
