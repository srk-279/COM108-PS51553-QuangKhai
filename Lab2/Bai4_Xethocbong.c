#include <stdio.h>
int main() {
    float dtb;
    int hk;
    printf("Nhap diem trung binh: ");
    scanf("%f", &dtb);
    printf("Nhap hanh kiem: ");
    scanf("%d", &hk);
    printf("Dieu kien diem trung binh >=8: %d\n", dtb >=8);
    printf("Dieu kien hanh kiem tot: %d\n", hk ==1);
    printf("Ket qua xet hoc bong (1 : Dat, 0 : khong dat): %d\n", (dtb>=8) && (hk ==1));
    return 0;
}