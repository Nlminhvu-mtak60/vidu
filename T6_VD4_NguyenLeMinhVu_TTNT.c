#include <stdio.h>

int main() {
    FILE *fin, *fout;
    int m, n, p, q;
    int A[100][100], B[100][100], C[100][100];
    int i, j;

    // Mở file input
    fin = fopen("d:\\input2.dat", "r");
    if (fin == NULL) {
        printf("Khong mo duoc file input\n");
        return 1;
    }

    fscanf(fin, "%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            fscanf(fin, "%d", &A[i][j]);
        }
    }

    fscanf(fin, "%d %d", &p, &q);
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            fscanf(fin, "%d", &B[i][j]);
        }
    }
    fclose(fin);

    // Kiểm tra điều kiện cộng
    if (m != p || n != q) {
        printf("Khong cong duoc do kich thuoc khac nhau\n");
        return 1;
    }

    // Tính ma trận tổng
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Ghi ra file output
    fout = fopen("d:\\output2.dat", "w");
    if (fout == NULL) {
        printf("Khong mo duoc file output\n");
        return 1;
    }

    fprintf(fout, "%d %d\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            fprintf(fout, "%d ", C[i][j]);
        }
        fprintf(fout, "\n");
    }
    fclose(fout);

    return 0;
}
