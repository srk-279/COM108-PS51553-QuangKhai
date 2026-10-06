#include <stdio.h>
#include <math.h>
void HienThiMenu();
void tinhHocLuc();
void giaiPhuongTrinhBacHai();
void tinhTienDien();
int main() {
    int LuaChon;
    do {
        HienThiMenu();
        scanf("%d", &LuaChon);

        switch (LuaChon) {
            case 1:
                tinhHocLuc();
                break;
            case 2:
                giaiPhuongTrinhBacHai();
                break;
            case 3:
                tinhTienDien();
                break;
            case 0:
                printf("Tam Biet\n");
                break;
            default:
                printf("chua co chuc nang lua chon\n");
                break;
        }
        printf("\n");
    } while (LuaChon != 0);

    return 0;
}
void HienThiMenu() {
    printf("==== MENU CHUONG TRINH LAB 3 ====\n");
    printf("1. Tinh hoc luc sinh vien\n");
    printf("2. Giai phung trinh bac hai\n");
    printf("3. Tinh tien dien tieu thu\n");
    printf("0. Thoat chuong trinh\n");
    printf("Nhap lua chon cua ban: ");
}
void tinhHocLuc() {
    float diem;
    printf("Nhap vao diem so cua sinh vien: ");
    scanf("%f", &diem);
    if (diem < 0.0 || diem > 10.0) {
        printf("Diem so nhap vao khong hop le\n");
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
        } else if(diem >= 3.5) {
            printf("Hoc luc: Yeu\n");
        } else {
            printf("Hoc luc: Kem\n");
        }
    }
}
void giaiPhuongTrinhBacHai() {
    float a, b, c;
    printf("Nhap vao 3 he so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            float x = -c / b;
            printf("Phuong trinh co mot nghiem duy nhat: x = %.2f\n", x);
        }
    } 
    else {
        float delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            float x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
}
void tinhTienDien() {
    float soDien;
    printf("Nhap vao so dien tieu thu: ");
    scanf("%f", &soDien);
    if (soDien < 0) {
        printf("So dien tieu thu khong hop le\n");
    } else {
        float tienDien;
        if (soDien <= 50) {
            tienDien = soDien * 1.678;
        } else if (soDien <= 100) {
            tienDien = 50 * 1.678 + (soDien - 50) * 1.734;
        } else if (soDien <= 200) {
            tienDien = 50 * 1.678 + 50 * 1.734 + (soDien - 100) * 2.014;
        } else if (soDien <= 300) {
            tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soDien - 200) * 2.536;
        } else if (soDien <= 400) {
            tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soDien - 300) * 2.834;
        } else {
            tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soDien - 400) * 2.927;
        }
        printf("So tien dien phai tra: %.2f dong\n", tienDien);
    }
}