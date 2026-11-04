#include <stdio.h>

int giaithua(int n) {
    int kq = 1;
    for (int i = 2; i <= n; i++) {
        kq *= i;
    }
    return kq;
}

int strong(int n) {
    int sum = 0, temp = n;   
    while (temp > 0) {
        sum += giaithua(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int start = a, end = b;
    if (a > b) {
        start = b;
        end = a;
    }
    int first = 1;
    for (int i = start; i <= end; i++) {
        if (strong(i)) {
            if (!first) printf(" ");
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}
