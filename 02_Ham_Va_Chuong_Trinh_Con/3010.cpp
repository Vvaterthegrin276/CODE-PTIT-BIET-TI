#include <stdio.h>

int giaithua(int n) {
    int kq = 1, i;
    for (i = 1; i <= n; i++)
        kq *= i;
    return kq;
}

int lasostrong(int n) {
    int tong = 0, tmp = n;
    while (tmp > 0) {
        tong += giaithua(tmp % 10);
        tmp /= 10;
    }
    return tong == n;
}

int main() {
    int n, i, dem;
    scanf("%d", &n);
    dem = 0;
    for (i = 1; i < n; i++) {
        if (lasostrong(i)) {
            if (dem > 0) printf(" ");
            printf("%d", i);
            dem++;
        }
    }
    printf("\n");
    return 0;
}
