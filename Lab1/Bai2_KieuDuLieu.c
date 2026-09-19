#include <stdio.h>
int main() {
    int namSinh; // %d
    float diemTB; //%f

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    printf("Nhap diem: ");
    scanf("%f", &diemTB);
    // Xuất 
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", 2026 - namSinh);
    printf("Diem TB: %f", diemTB);

    return 0;
}