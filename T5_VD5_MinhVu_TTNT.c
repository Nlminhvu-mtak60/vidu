#include <stdio.h>
#include <math.h>

// Hàm tính khoảng cách giữa 2 điểm
double kc(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

// Hàm tính diện tích tam giác biết 3 đỉnh
double dientich(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a = kc(x1, y1, x2, y2);
    double b = kc(x2, y2, x3, y3);
    double c = kc(x3, y3, x1, y1);
    double p = (a + b + c) / 2.0; // nửa chu vi
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    int ax, ay, bx, by, cx, cy, mx, my;
    printf("Nhap toa do A: "); scanf("%d %d", &ax, &ay);
    printf("Nhap toa do B: "); scanf("%d %d", &bx, &by);
    printf("Nhap toa do C: "); scanf("%d %d", &cx, &cy);
    printf("Nhap toa do M: "); scanf("%d %d", &mx, &my);

    double SABC = dientich(ax, ay, bx, by, cx, cy);
    double SMAB = dientich(mx, my, ax, ay, bx, by);
    double SMBC = dientich(mx, my, bx, by, cx, cy);
    double SMCA = dientich(mx, my, cx, cy, ax, ay);

    double S_sum = SMAB + SMBC + SMCA;

    if (fabs(S_sum - SABC) < 1e-6) {
        printf("M nam trong tam giac ABC\n");
    } else {
        printf("M nam ngoai tam giac ABC\n");
    }

    return 0;
}
