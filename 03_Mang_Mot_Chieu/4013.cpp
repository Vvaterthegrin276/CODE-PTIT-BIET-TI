#include <stdio.h>
#define MAX 100

void nhapmang(int n, int a[MAX]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void demvain(int n, int a[MAX]) {
    int i, j, dem, d;
    d = 0;
    
    for (i = 0; i < n; i++) {
        dem = 0;
        for (j = 0; j < n; j++) {
            if (a[j] == a[i])
                dem++;
        }
        if (dem == 1)
            d++;
    }
    printf("%d\n", d);
 
    int first = 0;
    for (i = 0; i < n; i++) {
        dem = 0;
        for (j = 0; j < n; j++) {
            if (a[j] == a[i])
                dem++;
        }
        if (dem == 1) {
            if (first > 0) printf(" ");
            printf("%d", a[i]);
            first++;
        }
    }
    printf("\n");
}

int main() {
    int n;
    int a[MAX];
    scanf("%d", &n);
    nhapmang(n, a);
    demvain(n, a);
    return 0;
}
