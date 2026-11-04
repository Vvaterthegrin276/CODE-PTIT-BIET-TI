#include <stdio.h>
#include <math.h>

void solve() {
    double p, a;
    if (scanf("%lf %lf", &p, &a) != 2) return;

    int valid_p = (p >= 0.0 && p <= 1.0);

    int valid_a = (fabs(a - 2.0) < 1e-9 || fabs(a - 2.78) < 1e-9 || fabs(a - 10.0) < 1e-9);

    if (!valid_p || !valid_a) {
        printf("ND\n");
        return;
    }

    if (p < 1e-9 || fabs(p - 1.0) < 1e-9) {
        printf("0.00\n");
        return;
    }

    double term1 = -p * (log(p) / log(a));
    double term2 = -(1.0 - p) * (log(1.0 - p) / log(a));

    double H = term1 + term2;

    if (fabs(H) < 1e-9) H = 0.0;
    
    printf("%.2f\n", H);
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
