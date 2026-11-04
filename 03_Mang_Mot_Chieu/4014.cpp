#include <stdio.h>
#define MAX 100

void nhapmang(int n, int a[MAX]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void insolan(int n, int a[MAX]) {
    int i, j, dem, in;
    
    for (i = 0; i < n; i++) {
        
        in = 0;
        for (j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                in = 1;
                break;
            }
        }
        
        if (in == 0) {
        
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
