#include <stdio.h>
int ucln(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    
    long long uc = ucln(a, b);
    long long bc = a / uc * b;  
    
    printf("%lld\n", uc);
    printf("%lld\n", bc);
    return 0;
}
