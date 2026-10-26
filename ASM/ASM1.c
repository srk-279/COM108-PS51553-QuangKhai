#include <stdio.h>
#include <math.h>
void printMenu();
void ktSoNguyen();

int main() {
    int luaChon;
    
    do {
        printMenu();
        printf("Nhap lua chon chuc nang: ");
        scanf("%d", &luaChon);
        
        switch (luaChon) {
            case 0:
                printf("\nTam biet!\n");
                break;
            case 1:
                printf("\n--- Kiem tra so nguyen ---\n");
                ktSoNguyen();
                break;
            case 2:
                printf("\n--- Tim uoc chung va boi chung cua 2 so ---\n");
                break;
            case 3:
                printf("\n--- Chuong trinh tinh tien quan Karaoke ---\n");
                break;
            case 4:
                printf("\n--- Tinh tien dien ---\n");
                break;
            case 5:
                printf("\n--- Chuc nang doi tien ---\n");
                break;
            case 6:
                printf("\n--- Chuc nang tinh lai suat vay ngan hang/vay tra gop ---\n");
                break;
            case 7:
                printf("\n--- Vay tien mua xe ---\n");
                break;
            case 8:
                printf("\n--- Sap xep thong tin sinh vien ---\n");
                break;
            case 9:
                printf("\n--- Game POLY-LOTT ---\n");
                break;
            case 10:
                printf("\n--- Chuong trinh tinh toan phan so ---\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long chon lai (0-10).\n");
                break;
        }
        printf("\n");
    } while (luaChon != 0);
    
    return 0;
}

void printMenu() {
    printf("+------------------------------------------------------+\n");
    printf("|                         MENU                         |\n");
    printf("+------------------------------------------------------+\n");
    printf("| 0. Thoat.                                            |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 1. Kiem tra so nguyen.                               |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 2. Tim uoc chung va boi chung cua 2 so.              |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 3. Chuong trinh tinh tien quan Karaoke.              |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 4. Tinh tien dien.                                   |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 5. Chuc nang doi tien.                               |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 6. Chuc nang tinh lai suat vay / vay tra gop.        |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 7. Vay tien mua xe.                                  |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 8. Sap xep thong tin sinh vien.                      |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 9. Game POLY-LOTT.                                   |\n");
    printf("|------------------------------------------------------|\n");
    printf("| 10. Chuong trinh tinh toan phan so.                  |\n");
    printf("+------------------------------------------------------+\n");
}
void ktSoNguyen() {
    int x;
    printf("Nhap vao mot so nguyen x: ");
    scanf("%d", &x);

    int demUoc = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            demUoc++;
        }
    }
    if (demUoc == 2) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai la so nguyen to.\n", x);
    }

    int laChinhPhuong = 0;
    for (int i = 1; i <= x; i++) {
        if (i * i == x) {
            laChinhPhuong = 1;
            break;
        }
    }
    if (laChinhPhuong == 1) {
        printf("%d la so chinh phuong.\n", x);
    } else {
        printf("%d khong phai la so chinh phuong.\n", x);
    }

    int tongUoc = 0;
    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            tongUoc += i;
        }
    }
    if (tongUoc == x && x > 0) {
        printf("%d la so hoan hao.\n", x);
    } else {
        printf("%d khong phai la so hoan hao.\n", x);
    }
}

void uocChungBoiChung() {
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);

    int soA = a;
    int soB = b;

    while (soA != soB) {
        if (soA > soB) {
            soA = soA - soB;
        } else {
            soB = soB - soA;
        }
    }
    int ucln = soA;
    int bcnn = (a * b) / ucln;

    printf("Uoc chung lon nhat (UCLN) la: %d\n", ucln);
    printf("Boi chung nho nhat (BCNN) la: %d\n", bcnn);
}

void tinhTienKaraoke() {
    int gioBatDau, gioKetThuc;
    printf("Nhap gio bat dau (12 - 23): ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc (12 - 23): ");
    scanf("%d", &gioKetThuc);

    int soGio = gioKetThuc - gioBatDau;
    float tongTien = 0;

    if (soGio <= 3) {
        tongTien = soGio * 150000;
    } else {
        tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7;
    }

    if (gioBatDau >= 14 && gioBatDau <= 17) {
        tongTien = tongTien * 0.9;
    }

    printf("So gio hat la: %d\n", soGio);
    printf("Tong tien can tra la: %.0f VND\n", tongTien);
}

void tinhTienDien() {
    float kwh;
    printf("Nhap so chu dien (kWh): ");
    scanf("%f", &kwh);

    float tienDien = 0;

    if (kwh <= 50) {
        tienDien = kwh * 1678;
    } else if (kwh <= 100) {
        tienDien = 50 * 1678 + (kwh - 50) * 1734;
    } else if (kwh <= 200) {
        tienDien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    } else if (kwh <= 300) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    } else if (kwh <= 400) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    } else {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }

    float tongTien = tienDien * 1.1;

    printf("Tien dien chua thue: %.0f VND\n", tienDien);
    printf("Tong tien phai tra (da co VAT): %.0f VND\n", tongTien);
}