#include <stdio.h>

int main() {
    int chi_so_cu, chi_so_moi, so_dien_tieu_thu, tong_tien = 0;

 
    printf("Nhap chi so cu: ");
    scanf("%d", &chi_so_cu);
    printf("Nhap chi so moi: ");
    scanf("%d", &chi_so_moi);
    if (chi_so_moi >= chi_so_cu) {
       
    so_dien_tieu_thu = chi_so_moi - chi_so_cu;
    if (so_dien_tieu_thu <= 50) {
    tong_tien = so_dien_tieu_thu * 10000;
        } else if (so_dien_tieu_thu <= 100) {
            tong_tien = 50 * 10000 + (so_dien_tieu_thu - 50) * 15000;
        } else if (so_dien_tieu_thu <= 150) {
            tong_tien = 50 * 10000 + 50 * 15000 + (so_dien_tieu_thu - 100) * 20000;
        } else if (so_dien_tieu_thu <= 200) {
            tong_tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (so_dien_tieu_thu - 150) * 25000;
        } else {
            tong_tien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (so_dien_tieu_thu - 200) * 30000;
        }
     printf("So dien tieu thu: %d kWh\n", so_dien_tieu_thu);
        printf("Tong tien dien: %d VNÐ\n", tong_tien);
    } else {
        printf("Loi: Chi so moi phai lon hon hoac bang chi so cu.\n");
    }

    return 0;
}
