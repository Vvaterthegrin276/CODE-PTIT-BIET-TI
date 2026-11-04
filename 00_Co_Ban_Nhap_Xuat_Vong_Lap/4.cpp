#include <stdio.h>

int main()
{
    int t,k;
    scanf("%lld", &t);
    while (t--)
    {
        long long n;
        scanf("%lld", &n);
        printf("%.15f\n",(double)1/n);
    }
    return 0;
}
