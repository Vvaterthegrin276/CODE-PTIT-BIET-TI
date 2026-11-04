#include <stdio.h>
#define MAX 100

int nto(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

void nhapmang(int n, int a[MAX]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
void xuatmang(int n, int a[MAX]) {
    int dem = 0;
    int b[MAX];
    for (int i = 0; i < n; i++) {
        if (nto(a[i])) {
            b[dem++] = a[i];
        }
    }
    printf("%d ", dem);
    for (int i = 0; i < dem; i++) {
        printf("%d ", b[i]);
    }
}

int main() {
    int n;
    int a[MAX];
    scanf("%d", &n);
    nhapmang(n, a);
    xuatmang(n, a);
    return 0;
}
