#include <stdio.h>
#include <string.h>

struct SinhVien {
    char mssv[50];
    char tenSV[50];
    char nganhHoc[50];
    float diemTB;
};

struct SinhVien dssv[50];
int n = 0;

void printMenu() {
    printf("+---------------------------------------------------+\n");
    printf("|              MENU CHUONG TRINH LAB 8              |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Nhap va xuat danh sach sinh vien               |\n");
    printf("| 2. Sap xep sinh vien theo diem tang dan           |\n");
    printf("| 3. Tim kiem sinh vien theo MSSV                   |\n");
    printf("| 4. Xuat sinh vien nhan hoc bong theo nganh        |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
    printf(">> Xin moi chon chuc nang (1-5): ");
}

void nhapXuatSV() {
    printf("So luong sinh vien n: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    if (n < 1 || n > 50) {
        printf("So luong khong hop le!\n");
        n = 0;
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        
        printf("MSSV: ");
        fgets(dssv[i].mssv, sizeof(dssv[i].mssv), stdin);
        dssv[i].mssv[strcspn(dssv[i].mssv, "\n")] = '\0';

        printf("Ten SV: ");
        fgets(dssv[i].tenSV, sizeof(dssv[i].tenSV), stdin);
        dssv[i].tenSV[strcspn(dssv[i].tenSV, "\n")] = '\0';

        printf("Nganh hoc: ");
        fgets(dssv[i].nganhHoc, sizeof(dssv[i].nganhHoc), stdin);
        dssv[i].nganhHoc[strcspn(dssv[i].nganhHoc, "\n")] = '\0';

        do {
            printf("Diem TB: ");
            scanf("%f", &dssv[i].diemTB);
            while (getchar() != '\n');
        } while (dssv[i].diemTB < 0.0 || dssv[i].diemTB > 10.0);
    }

    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("MSSV: %s\n", dssv[i].mssv);
        printf("Ten SV: %s\n", dssv[i].tenSV);
        printf("Nganh hoc: %s\n", dssv[i].nganhHoc);
        printf("Diem TB: %.2f\n", dssv[i].diemTB);
    }
}

void sapXepSV() {
    struct SinhVien svTemp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (dssv[i].diemTB > dssv[j].diemTB) {
                svTemp = dssv[i];
                dssv[i] = dssv[j];
                dssv[j] = svTemp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("MSSV: %s\n", dssv[i].mssv);
        printf("Ten SV: %s\n", dssv[i].tenSV);
        printf("Nganh hoc: %s\n", dssv[i].nganhHoc);
        printf("Diem TB: %.2f\n", dssv[i].diemTB);
    }
}

void timKiemSV() {
    char key[50];
    int found = 0;

    printf("Nhap MSSV can tim: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    for (int i = 0; i < n; i++) {
        if (strcmp(dssv[i].mssv, key) == 0) {
            printf("Tim thay sinh vien:\n");
            printf("MSSV: %s\n", dssv[i].mssv);
            printf("Ten SV: %s\n", dssv[i].tenSV);
            printf("Nganh hoc: %s\n", dssv[i].nganhHoc);
            printf("Diem TB: %.2f\n", dssv[i].diemTB);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Khong tim thay sinh vien co MSSV: %s\n", key);
    }
}

void hocBongSV() {
    int coHocBong = 0;
    for (int i = 0; i < n; i++) {
        if (dssv[i].diemTB >= 8.0) {
            coHocBong = 1;
            break;
        }
    }

    if (coHocBong == 0) {
        printf("Khong co sinh vien nao dat hoc bong.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        if (dssv[i].diemTB >= 8.0) {
            int trung = 0;
            for (int j = 0; j < i; j++) {
                if (dssv[j].diemTB >= 8.0 && strcmp(dssv[i].nganhHoc, dssv[j].nganhHoc) == 0) {
                    trung = 1;
                    break;
                }
            }

            if (trung == 0) {
                printf("Nganh: %s\n", dssv[i].nganhHoc);
                for (int k = 0; k < n; k++) {
                    if (dssv[k].diemTB >= 8.0 && strcmp(dssv[k].nganhHoc, dssv[i].nganhHoc) == 0) {
                        printf("- %s - %s - Diem TB: %.2f\n", dssv[k].mssv, dssv[k].tenSV, dssv[k].diemTB);
                    }
                }
            }
        }
    }
}

int main() {
    int chon;
    do {
        printMenu();
        scanf("%d", &chon);
        while (getchar() != '\n');
        
        if (chon >= 2 && chon <= 4 && n == 0) {
            printf("Danh sach chua co sinh vien nao, phai hien thi thong bao yeu cau nhap danh sach truoc!\n\n");
            continue;
        }

        switch (chon) {
            case 1:
                nhapXuatSV();
                break;
            case 2:
                sapXepSV();
                break;
            case 3:
                timKiemSV();
                break;
            case 4:
                hocBongSV();
                break;
            default:
                break;
        }
        printf("\n");
    } while (chon != 5);
    return 0;
}
