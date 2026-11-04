#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int n, i, dem;
        scanf("%d", &n);
        dem = 0;
        for (i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i % 2 == 0) dem++;
                if (i != n/i && (n/i) % 2 == 0) dem++;
            }
        }
        printf("%d\n", dem);
        t--;
    }
    return 0;
}
