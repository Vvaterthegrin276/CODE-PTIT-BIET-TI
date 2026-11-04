#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[25];
        scanf("%s", s);
        
        int max = 0;
        int min = 9;
        
        for (int i = 0; s[i] != '\0'; i++) {
            int d = s[i] - '0';
            if (d > max) max = d;
            if (d < min) min = d;
        }
        
        printf("%d %d\n", max, min);
    }
    return 0;
}
