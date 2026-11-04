#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != EOF) {
        int max = n;
        int min = n;
        
        while (scanf("%d", &n) != EOF) {
            if (n > max) max = n;
            if (n < min) min = n;
        }
        
        printf("%d %d\n", max, min);
    }
    
    return 0;
}
