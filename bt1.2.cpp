#include <stdio.h>
struct HonSo {
    int nguyen;
    int tu;
    int mau;
};
void NhapHonSo(HonSo &hs) {
    printf("Nhap phan nguyen: ");
    scanf("%d", &hs.nguyen);
    printf("Nhap tu so: ");
    scanf("%d", &hs.tu);
    printf("Nhap mau so: ");
    scanf("%d", &hs.mau);
}

void XuatHonSo(HonSo hs) {
    printf("%d %d/%d\n", hs.nguyen, hs.tu, hs.mau);
}
int main() {
    HonSo hs;
    NhapHonSo(hs);
    printf("Hon so vua nhap la: ");
    XuatHonSo(hs);
    return 0;
}
