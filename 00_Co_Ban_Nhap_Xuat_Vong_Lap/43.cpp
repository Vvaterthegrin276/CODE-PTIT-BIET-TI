#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int fact[10];
    fact[0] = 1;
    for (int i = 1; i <= 9; i++) {
        fact[i] = fact[i - 1] * i;
    }

    int sum = 0;
    int temp = n;
    do {
        int digit = temp % 10;
        sum += fact[digit];
        temp /= 10;
    } while (temp > 0);

    if (sum == n)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
