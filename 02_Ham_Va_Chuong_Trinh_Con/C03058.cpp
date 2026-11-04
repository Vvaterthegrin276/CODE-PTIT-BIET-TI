#include <stdio.h>

long long ucln(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long bcnn(long long a, long long b) {
    return a / ucln(a, b) * b;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long a;
        scanf("%lld", &a);
        long long kq = 1;
        for (long long i = 1; i <= a; i++) {
            kq = bcnn(kq, i);
        }
        printf("%lld\n", kq);
    }
    return 0;
}
