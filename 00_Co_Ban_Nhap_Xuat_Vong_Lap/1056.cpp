#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        char s[20];
        scanf("%s", s);
        int n = strlen(s);
        int i, ok = 1;
        for (i = 0; i < n - 1; i++) {
            if (s[i] > s[i+1]) {
                ok = 0;
                break;
            }
        }
        if (ok)
            printf("YES\n");
        else
            printf("NO\n");
        t--;
    }
    return 0;
}
