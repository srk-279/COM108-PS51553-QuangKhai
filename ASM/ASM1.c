#include <stdio.h>

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
    printf("Day la chuc nang kiem tra so nguyen.\n");
}
