#include <stdio.h>
#include <string.h>

int main() {
    char hodem[50];
    char ten[50];
    int n;

    printf("Nhap so luong hv: ");
    scanf("%d", &n);
    getchar(); // bỏ ký tự Enter còn lại

    for (int i = 1; i <= n; i++) {
        printf("Nhap ho dem hoc vien thu %d: ", i);
        fgets(hodem, sizeof(hodem), stdin);
        hodem[strcspn(hodem, "\n")] = '\0'; // xóa \n

        printf("Nhap ten hoc vien thu %d: ", i);
        fgets(ten, sizeof(ten), stdin);
        ten[strcspn(ten, "\n")] = '\0';

        strcat(ten, " ");
        strcat(ten, hodem);

        printf("Ho ten sap xep: ");
        puts(ten);
    }

    return 0;
}
