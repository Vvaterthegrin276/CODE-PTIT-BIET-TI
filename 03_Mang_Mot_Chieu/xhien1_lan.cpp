#include <stdio.h>
#define MAX 100

void nhapmang(int n, int a[MAX]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
void insolan(int n, int a[MAX]) {
    int i, j, dem, dain;
    
    for (i = 0; i < n; i++) {
        dain = 0;
        for (j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                dain = 1;
                break;
            }
        }
        if (dain == 0) {
            dem = 0;
            for (j = 0; j < n; j++) {
                if (a[j] == a[i])
                    dem++;
            }
            printf("%d %d\n", a[i], dem);
        }
    }
}
int main() {
    int n;
    int a[MAX];
    scanf("%d", &n);
    nhapmang(n, a);
    insolan(n, a);
    return 0;
}
