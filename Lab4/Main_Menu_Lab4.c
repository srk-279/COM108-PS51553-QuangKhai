#include <stdio.h>
void printMenu();
void tinhTBC();
void ktSoNguyenTo();
void ktSoChinhPhuong();

int main() {
    int luaChon;
    do {
        printMenu();
        scanf("%d", &luaChon);
        
        switch (luaChon) {
            case 1:
                tinhTBC();
                break;
            case 2:
                ktSoNguyenTo();
                break;
            case 3:
                ktSoChinhPhuong();
                break;
            case 4:
                break;
            default:
                printf("Chi nhap vao 1 - 4!\n");
                break;
        }
    } while (luaChon != 4);
    
    return 0;
}
void printMenu() {
    printf("+---------------------------------------------------+\n");
    printf("|              MENU CHUONG TRINH LAB 4              |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong cac so chia het cho 2     |\n");
    printf("| 2. Kiem tra So nguyen to                          |\n");
    printf("| 3. Kiem tra So chinh phuong                       |\n");
    printf("| 4. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
    printf(">> Xin moi chon chuc nang (1-4): ");
}
void tinhTBC() {
    int min, max;
    int tong = 0;
    int bienDem = 0;
    float trungBinh;
    printf("Nhap vao hai so min va max: ");
    scanf("%d%d", &min, &max);
    if (min > max) {
        printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
    } else {
        int i = min;
        while (i <= max) {
            if (i % 2 == 0) {
                tong += i;
                bienDem++;
            }
            i++;
        }
        if (bienDem != 0) {
            trungBinh = (float)tong / bienDem;
            printf("Tong cac so chia het cho 2: %d\n", tong);
            printf("So luong cac so chia het cho 2: %d\n", bienDem);
            printf("Trung binh cong: %.2f\n", trungBinh);
        } else {
            printf("Khong co so nao chia het cho 2 trong khoang da nhap!\n");
        }
    }
}
void ktSoNguyenTo() {
    int x;
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);
    if (x < 2) {
        printf("%d khong phai la so nguyen to.\n", x);
    } 
    else {
        int laSNT = 1;
        for (int i = 2; i < x; i++) {
            if (x % i == 0) {
                laSNT = 0;
                break;
            }
        }
        if (laSNT == 1) {
            printf("%d la so nguyen to.\n", x);
        } else {
            printf("%d khong phai la so nguyen to.\n", x);
        }
    }
}
void ktSoChinhPhuong() {
    int x;
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);
    if (x == 0) {
        printf("0 la so chinh phuong.\n");
    } 
    else if (x < 0) {
        printf("%d khong phai la so chinh phuong.\n", x);
    } 
    else {
        int laSoChinhPhuong = 0;
        for (int i = 1; i <= x; i++) {
            if (i * i == x) {
                laSoChinhPhuong = 1;
                break;
            }
        }
        if (laSoChinhPhuong == 1) {
            printf("%d la so chinh phuong.\n", x);
        } else {
            printf("%d khong phai la so chinh phuong.\n", x);
        }
    }
}