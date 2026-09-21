#include <stdio.h>
int main() {
    int namsinh; // %d
    float diemTB; //%f
    printf("Nhap nam sinh: ");
    scanf("%d", &namsinh);
    printf("nhap diem: ");
    scanf("%f", &diemTB);
    // xuất
    printf("nam sinh: %d\n", namsinh);
    printf("tuoi: %d\n", 2026 - namsinh);
    printf("Diem TB: %f", diemTB);
    return 0;
}