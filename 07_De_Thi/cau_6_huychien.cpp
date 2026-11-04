#include <stdio.h>
#include <stdlib.h>
int main() {
    int tc;
    if (scanf("%d", &tc) != 1) return 0;
    while (tc--) {
        int m, n, i, j, ii, jj;
        if (scanf("%d %d %d %d %d %d", &m, &n, &i, &j, &ii, &jj) != 6) break;
        
        int mt[100][100];
        for (int r = 0; r<m; r++) {
            for (int c = 0; c < n; c++) {
                scanf("%d", &mt[r][c]);
            }
        }
        
        if (i < 0 || i >= m || j < 0 || j >= n || ii < 0 || ii >= m || jj < 0 || jj >= n) {
            printf("NO\n");
            continue;
        }
        
        int di = abs(i - ii);
        int dj = abs(j - jj);
        
        if (mt[i][j] == 1 && mt[ii][jj] == 1 && di <= 1 && dj <= 1 && !(di == 0 && dj == 0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
