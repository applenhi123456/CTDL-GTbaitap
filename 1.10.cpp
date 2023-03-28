#include <stdio.h>
#include <math.h>

int main() {
   float x, y, r;
   float pi = 3.14159;

   printf("Nhap toa do tam (x,y) cua duong tron: ");
   scanf("%f%f", &x, &y);

   printf("Nhap ban kinh r cua duong tron: ");
   scanf("%f", &r);

   float S = pi * r * r;
   float C = 2 * pi * r;

   printf("Dien tich cua duong tron la: %.2f\n", S);
   printf("Chu vi cua duong tron la: %.2f\n", C);

   return 0;
}
