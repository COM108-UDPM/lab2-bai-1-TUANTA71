#include <stdio.h>

int main() {
    // Chao mung ban den voi FPOLY
    // Mon hoc COM108 - Nhap mon lap trinh
    // LAB2 - bai1
    printf("Hello, FPOLY!\n");
    printf("COM108, LAB2 - bai1\n");

    // Cac lenh nhap vao so A
    printf("Moi ban nhap vao so A: ");
    int soA;
    scanf("%d", &soA);

    // Cac lenh nhap vao so B
    printf("Moi ban nhap vao so B: ");
    int soB;
    scanf("%d", &soB);

    // Cac lenh tinh tong cac so A, B
    int tong = soA + soB;
    printf("Tong hai so A va B la: %d", tong);

    return 0;
}
