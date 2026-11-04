#include <stdio.h>

int main() {
    long long n;
    long long max = 0;
    
    while (scanf("%lld", &n) != EOF) {
        if (n > max) {
            max = n;
        }
    }
    
    printf("%lld\n", max);
    
    return 0;
}
