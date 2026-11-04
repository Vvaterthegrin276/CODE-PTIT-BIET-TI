#include <stdio.h>
#include <math.h>

int nto(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a, b;
        scanf("%lld %lld", &a, &b);
        long long dem = 0;
        long long start = ceil(sqrt(a)); //lam tron len
        long long end = floor(sqrt(b)); //lam tron xuong
        for (long long i = start; i <= end; i++) {
            if (nto(i)) dem++;
        }
        printf("%lld\n", dem);
    }
    return 0;
}
