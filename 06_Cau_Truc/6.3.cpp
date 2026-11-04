#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} d;

double dai(d a, d b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        d a, b, c;
        scanf("%lf %lf %lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);

        double ab = dai(a, b);
        double bc = dai(b, c);
        double ac = dai(a, c);

        if (ab + ac > bc && ab + bc > ac && ac + bc > ab && ab > 0 && ac > 0 && bc > 0) {
            double p = (ab + ac + bc) / 2;
            double s = sqrt(p * (p - ab) * (p - ac) * (p - bc));
           
            
                printf("%.2f\n", s);

        } else {
            printf("INVALID\n");
        }
    }
    return 0;
}
