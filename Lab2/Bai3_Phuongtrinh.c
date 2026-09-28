#include <stdio.h>
int main() {
    float a, b;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%F", &b);
    float x = -b / a;
    printf("Nghiem cua phuong trinh la: %.2f\n", x);
    return 0;
}