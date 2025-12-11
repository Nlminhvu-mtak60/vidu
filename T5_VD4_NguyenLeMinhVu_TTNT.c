#include <stdio.h>
#include <math.h>
double kc(int ax, int ay, int bx, int by){
    int dx = ax - bx;
    int dy = ay - by;
    return sqrt((double)(dx * dx + dy * dy));
}

int main() {
    int ax, ay, bx, by, cx, cy;
    double l, m, n, p, s;

    ax = 0; ay = 0;
    bx = 0; by = 5;
    cx = 5; cy = 0;

    l = kc(ax, ay, bx, by);   
    m = kc(ax, ay, cx, cy); 
    n = kc(cx, cy, bx, by);   

    p = (l + m + n) / 2.0;

    s = sqrt(p * (p - l) * (p - m) * (p - n));

    printf("Dien tich tam giac: %.4f\n", s);
    return 0;
}
