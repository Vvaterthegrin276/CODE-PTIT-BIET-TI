#include <stdio.h>
#define MAX 100

void nhapmang(int n, int a[MAX]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int timMax(int n, int a[MAX]) {
    int i, kq = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > kq)
            kq = a[i];
    }
    return kq;
}

void inViTri(int n, int a[MAX], int kq) {
    int i, dem = 0;
    for (i = 0; i < n; i++) {
        if (a[i] == kq) {
            if (dem > 0)
                printf(" ");
            printf("%d", i);
            dem++;
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int n;
        int a[MAX];
        scanf("%d", &n);
        nhapmang(n, a);
        int m = timMax(n, a);
        printf("%d\n", m);
        inViTri(n, a, m);
        printf("\n");
        t--;
    }
    return 0;
}
