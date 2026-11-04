#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    if (n < 10) {
        printf("%lld", n);
        return 0;
    }

    long long cuoi = n % 10;
    long long dau = n;
    long long mu10 = 1;
    long long temp = n;

    while (temp >= 10) {
        temp /= 10;
        mu10 *= 10;
    }
    dau = temp;

    long long giua = (n % mu10) / 10;
    long long ket_qua = cuoi * mu10 + giua * 10 + dau;

    printf("%lld", ket_qua);

    return 0;
}
