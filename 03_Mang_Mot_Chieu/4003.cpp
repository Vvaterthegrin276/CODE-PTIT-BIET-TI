#include <stdio.h>
#define max 100

void nhapmang(int n, int a[max]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int doixung(int n, int a[max]) {
    int i;
    for (i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i])
            return 0; 
    }
    return 1;  
}

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int n;
        int a[max];
        scanf("%d", &n);
        nhapmang(n, a);
        if (doixung(n, a))
            printf("YES\n");
        else
            printf("NO\n");
        t--;
    }
    return 0;
}
