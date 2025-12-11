#include <stdio.h>
#include <conio.h>

int main() {
    int so1, so2;
    float thuong;
    char pheptoan;

    printf("\nNhap vao 2 so nguyen: ");
    scanf("%d%d", &so1, &so2);

    printf("\nNhap vao phep toan (+ - * /): ");
    scanf(" %c", &pheptoan);   // thêm khoảng trắng trước %c để bỏ qua ký tự Enter

    switch (pheptoan) {
        case '+':
            printf("\n%d + %d = %d", so1, so2, so1 + so2);
            break;
        case '-':
            printf("\n%d - %d = %d", so1, so2, so1 - so2);
            break;
        case '*':
            printf("\n%d * %d = %d", so1, so2, so1 * so2);
            break;
        case '/':
            if (so2 != 0) {
                thuong = (float)so1 / so2;
                printf("\n%d / %d = %.2f", so1, so2, thuong);
            } else {
                printf("\nKhong chia duoc cho 0");
            }
            break;
        default:
            printf("\nChua ho tro phep toan %c", pheptoan);
            break;
    }

    getch();
    return 0;
}
