#include <stdio.h>
int main() {
    #define PI 3.14159
    float chieurong, chieudai, bankinh;
    printf("Nhap chieu rong: ");
    scanf("%f", &chieurong);
    printf("Nhap chieu dai: ");
    scanf("%f", &chieudai);
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    printf("Dien tich hinh chu nhat: %f\n", chieurong * chieudai);
    printf("Chu vi hinh chu nhat: %f\n", 2 * (chieurong + chieudai));
    printf("Dien tich hinh tron: %.2f\n", PI * bankinh * bankinh);
    printf("Chu vi hinh tron: %.2f\n", 2 * PI * bankinh);
    return 0;
}
