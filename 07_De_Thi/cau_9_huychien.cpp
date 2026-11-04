#include <stdio.h>
#include <string.h>

int poly[10005];

void solve() {
    int len_f, len_g;
    if (scanf("%d %d", &len_f, &len_g) != 2) return;

    memset(poly, 0, sizeof(poly));
    int max_exp = -1;

    for (int i = 0; i < len_f; i++) {
        int exp;
        scanf("%d", &exp);
        poly[exp] ^= 1;
        if (exp > max_exp) max_exp = exp;
    }

    for (int i = 0; i < len_g; i++) {
        int exp;
        scanf("%d", &exp);
        poly[exp] ^= 1;
        if (exp > max_exp) max_exp = exp;
    }

    int has_term = 0;
    int first = 1;
    for (int i = 0; i <= max_exp; i++) {
        if (poly[i] == 1) {
            has_term = 1;
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }

    if (!has_term) {
        printf("[]\n0\n");
        return;
    }
    printf("\n");

    first = 1;
    for (int i = 0; i <= max_exp; i++) {
        if (poly[i] == 1) {
            if (!first) {
                printf(" + ");
            }
            if (i == 0) {
                printf("1");
            } else if (i == 1) {
                printf("x");
            } else {
                printf("x^%d", i);
            }
            first = 0;
        }
    }
    printf("\n");
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
