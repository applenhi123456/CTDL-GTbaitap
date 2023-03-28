#include <iostream>
using namespace std;

// Định nghĩa kiểu dữ liệu Fraction
struct Fraction {
    int whole_part;     // phần nguyên
    int numerator;      // tử số
    int denominator;    // mẫu số
};

// Hàm nhập giá trị cho hỗn số
void inputFraction(Fraction &frac) {
    cout << "Nhap phan nguyen: ";
    cin >> frac.whole_part;
    cout << "Nhap tu so: ";
    cin >> frac.numerator;
    cout << "Nhap mau so: ";
    cin >> frac.denominator;
}

// Hàm xuất giá trị của hỗn số
void outputFraction(Fraction frac) {
    cout << frac.whole_part << " " << frac.numerator << "/" << frac.denominator << endl;
}

int main() {
    Fraction frac;

    // Nhập giá trị cho hỗn số
    inputFraction(frac);

    // Xuất giá trị của hỗn số
    outputFraction(frac);

    return 0;
}
