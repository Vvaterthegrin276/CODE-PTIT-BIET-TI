#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m, n;
        scanf("%d %d", &m, &n);
        int a[100][100];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &a[i][j]);

        int dau = 0, cuoi = m - 1;
        int trai = 0, phai = n - 1;

        while (dau <= cuoi && trai <= phai) {
            for (int j = trai; j <= phai; j++)
                printf("%d ", a[dau][j]);
            for (int i = dau + 1; i <= cuoi; i++)
                printf("%d ", a[i][phai]);

            if (dau < cuoi) {
                for (int j = phai - 1; j >= trai; j--)
                    printf("%d ", a[cuoi][j]);
            }

            if (trai < phai) {
                for (int i = cuoi - 1; i >= dau + 1; i--)
                    printf("%d ", a[i][trai]);
            }

            dau++;
            cuoi--;
            trai++;
            phai--;
        }
        printf("\n");
    }
    return 0;
}
