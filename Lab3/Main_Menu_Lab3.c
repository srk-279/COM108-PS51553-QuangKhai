#include <stdio.h>
#include <math.h>
void hienThiMenu();
void tinhHocLuc();
void giaiPTBacHai();
void tinhTienDien();

int main() {
    int luaChon;
    do {
        hienThiMenu();
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                tinhHocLuc();
                break;
            case 2:
                giaiPTBacHai();
                break;
            case 3:
                tinhTienDien();
                break;
            case 0:
                printf("Tam biet\n");
                break;
            default:
                printf("Chua co chua nang lua chon\n");
                break;
        }
        printf("\n");
    } while (luaChon != 0);

    return 0;
}
void hienThiMenu() {
    printf("===== MENU CHUONG TRINH LAB 3 =====\n");
    printf("1. Tinh hoc luc sinh vien\n");
    printf("2. Giai phuong trinh bac hai\n");
    printf("3. Tinh tien dien tieu thu\n");
    printf("0. Thoat chuong trinh\n");
    printf("Nhap lua chon cua ban: ");
}
void tinhHocLuc() {
    float diem;
    printf("Nhap vao diem so cua sinh vien: ");
    scanf("%f", &diem);
    if (diem < 0.0 || diem > 10.0) {
        printf("Diem so nhap vao khong hop le!\n");
    } 
    else {
        if (diem >= 9.0) {
            printf("Hoc luc: Xuat sac\n");
        } else if (diem >= 8.0) {
            printf("Hoc luc: Gioi\n");
        } else if (diem >= 6.5) {
            printf("Hoc luc: Kha\n");
        } else if (diem >= 5.0) {
            printf("Hoc luc: Trung binh\n");
        } else if (diem >= 3.5) {
            printf("Hoc luc: Yeu\n");
        } else {
            printf("Hoc luc: Kem\n");
        }
    }
}
void giaiPTBacHai() {
    float a, b, c;
    printf("Nhap vao 3 he so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", x);
        }
    } 
    else {
        float delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            float xKip = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", xKip);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
}
void tinhTienDien() {
    int kwh;
    float thanhTien = 0;

    printf("Nhap vao tong so kWh dien tieu thu: ");
    scanf("%d", &kwh);
    if (kwh <= 0) {
        printf("So kWh phai la so duong va lon hon 0!\n");
        return;
    }
    if (kwh <= 50) {
        thanhTien = kwh * 1.678;
    } else if (kwh <= 100) {
        thanhTien = (50 * 1.678) + (kwh - 50) * 1.734;
    } else if (kwh <= 200) {
        thanhTien = (50 * 1.678) + (50 * 1.734) + (kwh - 100) * 2.014;
    } else if (kwh <= 300) {
        thanhTien = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + (kwh - 200) * 2.536;
    } else if (kwh <= 400) {
        thanhTien = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + (100 * 2.536) + (kwh - 300) * 2.834;
    } else {
        thanhTien = (50 * 1.678) + (50 * 1.734) + (100 * 2.014) + (100 * 2.536) + (100 * 2.834) + (kwh - 400) * 2.927;
    }
    printf("Tong tien dien phai tra: %.3f dong\n", thanhTien);
}