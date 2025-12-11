#include <stdio.h>
#include <string.h>

char ds[50][50] = {
    "Le Kha Duy",
    "Nguyen Le Minh Vu",
    "Phan Dang Xuan",
    "Le Van A"
};

int tk(char ds[][50], int n, char tenCanTim[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i], tenCanTim) == 0) {
            return i; 
        }
    }
    return -1;
}

int main() {
    char find[50];
    int vt;

    printf("Nhap vao ho va ten: ");
    fgets(find, sizeof(find), stdin);
    find[strcspn(find, "\n")] = '\0';

    vt = tk(ds, 4, find);

    if (vt != -1)
        printf("Tim thay ten o vi tri thu %d trong danh sach\n", vt + 1);
    else
        printf("Khong tim thay ten trong danh sach\n");

    return 0;
}
