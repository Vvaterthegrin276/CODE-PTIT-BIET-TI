#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int a[MAX];

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int n, i, j;
        scanf("%d", &n);
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        
        int ketqua = -1;
        int minIdx = n;
        
        // v?i m?i ph?n t?, tìm xem có trùng không
        // n?u trùng, l?y v? trí xu?t hi?n d?u tiên nh? nh?t
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    // i là v? trí d?u tiên c?a s? này
                    if (i < minIdx) {
                        minIdx = i;
                        ketqua = a[i];
                    }
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
