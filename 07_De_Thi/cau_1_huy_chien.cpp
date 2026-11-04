#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
    
        if (a + b <= c || a + c <= b || b + c <= a) {
            printf("0 ND ND\n");
            continue;
        }

        if (a * a + b * b <= c * c || a * a + c * c <= b * b || b * b + c * c <= a * a) {
            printf("0 ND ND\n");
            continue;
        }
        double chu_vi = a + b + c;
        double p = chu_vi / 2.0;
        double dien_tich = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("1 %.3f %.3f\n", chu_vi, dien_tich);
    }
    return 0;
}
