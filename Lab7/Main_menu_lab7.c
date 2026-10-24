#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h> 

void bai1();
void bai2();
void bai3();
void bai4();

int main() {
    int chon;
    
    do {
        printf("+---------------------------------------------------+\n");
        printf("|             MENU CHUONG TRINH LAB 7               |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Dem nguyen am va phu am cua chuoi              |\n");
        printf("| 2. Dang nhap bang Username va Password            |\n");
        printf("| 3. Sap xep chuoi theo chu cai                     |\n");
        printf("| 4. Doi so thap phan sang thap luc phan            |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        
        scanf("%d", &chon);
        
        while (getchar() != '\n'); 

        switch (chon) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 4:
                bai4();
                break;
            case 5:
                printf("Tam biet! Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Chuc nang khong hop le! Vui long chon lai (1-5).\n");
        }
        printf("\n");
    } while (chon != 5);

    return 0;
}

void bai1() {
    char s[100];
    int nguyenAm = 0, phuAm = 0;

    printf("Nhap vao mot chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; 

    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]); 
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            nguyenAm++;
        } 
        else if (c >= 'a' && c <= 'z') {
            phuAm++;
        }
    }

    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.\n", s, nguyenAm, phuAm);
}

void bai2() {
    char system_user[20] = "admin";
    char system_pass[20] = "12345";

    char username[20];
    char password[20];
    int i = 0;
    char ch;

    printf("Nhap username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Nhap password: ");
    while (1) {
        ch = getch(); 

        if (ch == 13) { 
            password[i] = '\0'; 
            break;
        } 
        else if (ch == 8) { 
            if (i > 0) {
                i--;
                printf("\b \b"); 
            }
        } 
        else {
            if (i < 19) { 
                password[i] = ch;
                i++;
                printf("*"); 
            }
        }
    }
    printf("\n");

    if (strcmp(username, system_user) == 0 && strcmp(password, system_pass) == 0) {
        printf("Dang nhap thanh cong!\n");
    } else {
        printf("Dang nhap that bai!\n");
    }
}

void bai3() {
    char s[5][20];
    char temp[20];

    printf("Nhap 5 chuoi bat ky:\n");
    for (int i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        fgets(s[i], sizeof(s[i]), stdin);
        s[i][strcspn(s[i], "\n")] = '\0';
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) { 
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("Cac chuoi sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
}

void bai4() {
    int n;
    printf("Nhap vao mot so nguyen khong am: ");
    scanf("%d", &n);
    while (getchar() != '\n'); 

    if (n < 0) {
        printf("So nhap vao khong hop le!\n");
        return;
    }

    if (n == 0) {
        printf("So thap luc phan cua 0 la: 0\n");
        return;
    }

    char hexa_chars[] = "0123456789ABCDEF"; 
    char bientam[50];
    char ketqua[50];
    int index = 0;
    int goc = n;

    while (n > 0) {
        int du = n % 16;
        bientam[index] = hexa_chars[du]; 
        index++;
        n = n / 16;
    }
    bientam[index] = '\0'; 

    int doDai = strlen(bientam);
    for (int i = 0; i < doDai; i++) {
        ketqua[i] = bientam[doDai - 1 - i];
    }
    ketqua[doDai] = '\0'; 

    printf("So thap luc phan cua %d la: %s\n", goc, ketqua);
}
