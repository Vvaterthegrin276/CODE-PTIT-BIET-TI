#include <stdio.h>
#define MAX 100000

int a[MAX];

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int n, i, j;
        int ketqua = -1, vitri = MAX;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        
        for (i = 1; i < n; i++) {
            for (j = 0; j < i; j++) {
                if (a[j] == a[i] && i < vitri) {
                    vitri = i;
                    ketqua = a[i];
                    break;
                }
            }
        }
        
        if (ketqua == -1)
            printf("NO\n");
        else
            printf("%d\n", ketqua);
        t--;
    }
    return 0;
}
