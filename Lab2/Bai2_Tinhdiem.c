#include <stdio.h>
int main() {
    float toan, ly, hoa;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);
    printf("Diem Trung Binh: %.2f\n", (toan * 3 + ly * 2 + hoa ) / (float)6);
    return 0;
}
