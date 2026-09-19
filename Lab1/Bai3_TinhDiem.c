#include <stdio.h>

int main() {
    char mssv[] = "PS51553";
    char hoTen[] = "Tran Quang Khai";

    float toan = 7.9;
    float ly = 7.1;
    float hoa = 7.4;

    float diemTrungBinh = (toan * 2 + ly + hoa) / (float)4;

    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}