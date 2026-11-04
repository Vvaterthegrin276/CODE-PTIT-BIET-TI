/*#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        long long dem = 0;
        while (n % 2 == 0) {
            dem++;
            n /= 2;
        }
        long long demuocle = 1;
        for (long long i = 3; i * i <= n; i += 2) {
            int demle = 0;
            while (n % i == 0) {
                demle++;
                n /= i;
            }
            if (demle) demuocle *= (demle + 1);
        }
        if (n > 1) demuocle *= 2;
        printf("%lld\n", dem * demuocle);
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        long long dem = 0; 
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i % 2 == 0) dem++;
                if ((n / i) % 2 == 0 && i * i != n) dem++;
            }
        }
        printf("%lld\n", dem);
    }
    return 0;
}
