#include <stdio.h>

struct DuongTron {
    float x; // Tọa độ tâm đường tròn
    float y;
    float banKinh; // Bán kính đường tròn
};

void nhapDuongTron(struct DuongTron* dt) {
    printf("Nhap toa do tam: ");
    scanf("%f %f", &dt->x, &dt->y);

    printf("Nhap ban kinh: ");
    scanf("%f", &dt->banKinh);
}

void xuatDuongTron(struct DuongTron dt) {
    printf("Duong tron co tam tai (%.2f, %.2f) va ban kinh la %.2f\n", dt.x, dt.y, dt.banKinh);
}

int main() {
    struct DuongTron dt1;

    printf("Nhap thong tin duong tron:\n");
    nhapDuongTron(&dt1);

    printf("Duong tron vua nhap:\n");
    xuatDuongTron(dt1);

    return 0;
}
