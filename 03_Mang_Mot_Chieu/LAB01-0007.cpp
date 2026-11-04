#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[20];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    float tb = 0.0;
    for (int i = 0; i < n; i++) {
        tb += (float)a[i] / n;
    }
    printf("%.3f", tb);
    return 0;
}
