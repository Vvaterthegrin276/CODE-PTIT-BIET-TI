#include <stdio.h>
#define MAX 100

void nhapmang(int n, int a[MAX]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void xuatmang(int n, int a[MAX]) {
    int i;
    for (i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

void sapxepchen(int n, int a[MAX]) {
    int i, j, key;
    
    for (i = 0; i < n; i++) {
        key = a[i];
        j = i - 1;
        
        // d?ch các ph?n t? l?n hon key sang ph?i
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        
        printf("Buoc %d: ", i);
        xuatmang(i + 1, a);  // ch? in i+1 ph?n t? d?u
    }
}

int main() {
    int n;
    int a[MAX];
    scanf("%d", &n);
    nhapmang(n, a);
    sapxepchen(n, a);
    return 0;
}
