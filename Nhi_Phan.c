#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    int n, a[100];
    int i = 0;
    printf("Nhập n: ");
    scanf("%d", &n);
    while(n != 0){
         a[i] = n % 2;                       
        n = n / 2;
        i++;
    }
    printf("Nguyen Le Minh Vu");
     printf("%d", i);
    for(i= i - 1; i >= 0; i--)
        printf("%d", a[i]);
    return 0;
}
