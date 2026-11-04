#include <stdio.h>
#define MAX 100

void nhapmang(int n, int a[MAX]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void dichphai(int n, int a[MAX], int m) {
    int b[MAX];
    int i, j;
    j = 0;
    
   
    for (i = n - m; i < n; i++)
        b[j++] = a[i];
    
   
    for (i = 0; i < n - m; i++)
        b[j++] = a[i];
    
    for (i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", b[i]);
    }
    printf("\n");
}

int main() {
    int n, m;
    int a[MAX];
    scanf("%d", &n);
    nhapmang(n, a);
    scanf("%d", &m);
    dichphai(n, a, m);
    return 0;
}
