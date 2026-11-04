#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 2) return 1;
    long long a = 1, b = 1, c;
    int i;
    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibonacci(n));
        t--;
    }
    return 0;
}
