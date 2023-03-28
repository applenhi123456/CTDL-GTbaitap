#include <stdio.h>

typedef struct {
    char maso[5];
    char loai[10];
    char hoten[30];
    int cmnd;
    int ngay, thang, nam;
    float sotiengui;
} SOTIETKIEM;

void nhapSotietkiem(SOTIETKIEM *stk) {
    printf("Nhap ma so (toi da 5 ky tu): ");
    scanf("%5s", stk->maso);
    printf("Nhap loai tiet kiem (toi da 10 ky tu): ");
    scanf("%10s", stk->loai);
    printf("Nhap ho ten khach hang (toi da 30 ky tu): ");
    scanf("%30s", stk->hoten);
    printf("Nhap CMND: ");
    scanf("%d", &stk->cmnd);
    printf("Nhap ngay mo so: ");
    scanf("%d", &stk->ngay);
    printf("Nhap thang mo so: ");
    scanf("%d", &stk->thang);
    printf("Nhap nam mo so: ");
    scanf("%d", &stk->nam);
    printf("Nhap so tien gui: ");
    scanf("%f", &stk->sotiengui);
}

void xuatSotietkiem(SOTIETKIEM stk) {
    printf("Ma so: %s\n", stk.maso);
    printf("Loai tiet kiem: %s\n", stk.loai);
    printf("Ho ten khach hang: %s\n", stk.hoten);
    printf("CMND: %d\n", stk.cmnd);
    printf("Ngay mo so: %d/%d/%d\n", stk.ngay, stk.thang, stk.nam);
    printf("So tien gui: %.2f\n", stk.sotiengui);
}

int main() {
    SOTIETKIEM stk;
    nhapSotietkiem(&stk);
    printf("\nThong tin sotietkiem:\n");
    xuatSotietkiem(stk);
    return 0;
}
