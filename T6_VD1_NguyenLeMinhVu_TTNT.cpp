#include <stdio.h>
#include <string.h>
#include <conio.h>   // để dùng kbhit()
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

// Hàm sleep cross-platform
void mySleep(int ms) {
#ifdef _WIN32
    Sleep(ms);
#else
    usleep(ms * 1000);
#endif
}

int main() {
    char qc[200] = "Quang cao mien phi: Khong co tien thi khong co tinh yeu! ";
    int dd = strlen(qc);

    char tam[200];
    strcpy(tam, qc);
    strcat(qc, tam);   // nhân đôi chuỗi quảng cáo

    char hien[31];     // chứa chuỗi dài 30 kí tự
    int i = 0;

    while (!kbhit()) {  // dừng khi có phím bấm
        strncpy(hien, qc + i, 30);
        hien[30] = '\0';

        printf("\r%s", hien); // in đè lại trên cùng một dòng
        fflush(stdout);       // đảm bảo in ngay

        mySleep(0.001);         // dừng 100ms
        i++;
        if (i == dd) i = 0;
    }

    return 0;
}
