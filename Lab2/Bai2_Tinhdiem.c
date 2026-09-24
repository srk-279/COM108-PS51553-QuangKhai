#include <stdio.h>
int main() {
    float Toan, Ly, Hoa;
    printf("Nhap diem Toan: ");scanf("%f", &Toan);
    printf("Nhap diem Ly: ");scanf("%f", &Ly);
    printf("Nhap diem Hoa: ");scanf("%f", &Hoa);
    printf("Diem Trung Binh: %.2f\n", (Toan * 3 + Ly * 2 + Hoa) / (float)6);
    return 0;
}