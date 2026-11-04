#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int m;
        scanf("%d", &m);
        int count = 0;
        while (m > 0) {
            count += m & 1; 
            m >>= 1;       
        }
        printf("%d\n", count);
    }
    return 0;
}
