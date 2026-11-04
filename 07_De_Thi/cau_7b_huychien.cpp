#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int m;
        scanf("%d", &m);
        int min_weight = 1000;  
        for (int i = 0; i < m; i++) {
            char s[55];
            scanf("%s", s);
            int cnt = 0;
            for (int j = 0; j < strlen(s); j++) {
                if (s[j] == '1') cnt++;
            }
            if (cnt > 0 && cnt < min_weight) {
                min_weight = cnt;
            }
        }
        printf("%d\n", min_weight);
    }
    return 0;
}
