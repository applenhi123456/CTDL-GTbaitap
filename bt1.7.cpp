#include <stdio.h>

struct Ngay {
    int ngay;
    int thang;
    int nam;
};

void nhapNgay(struct Ngay* ngay) {
    printf("Nhap ngay: ");
    scanf("%d", &ngay->ngay);

    printf("Nhap thang: ");
    scanf("%d", &ngay->thang);

    printf("Nhap nam: ");
    scanf("%d", &ngay->nam);
}

void xuatNgay(struct Ngay ngay) {
    printf("%02d/%02d/%04d", ngay.ngay, ngay.thang, ngay.nam);
}

int main() {
    struct Ngay ngay1;

    printf("Nhap ngay thang nam:\n");
    nhapNgay(&ngay1);

    printf("Ngay vua nhap la: ");
    xuatNgay(ngay1);

    return 0;
}
