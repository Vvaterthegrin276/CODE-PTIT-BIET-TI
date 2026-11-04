#include <stdio.h>
#define MAX 100

void nhapmang(int n, int a[MAX]) {
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
void tachmang(int n, int a[MAX]) {
    int chan[MAX], le[MAX];
    int dem_chan, dem_le, i;
    dem_chan = 0;
    dem_le = 0;
    
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            chan[dem_chan++] = a[i];
        else
            le[dem_le++] = a[i];
    }
    
    for (i = 0; i < dem_chan; i++) {
        if (i > 0) printf(" ");
        printf("%d", chan[i]);
    }
    printf("\n");
    
    for (i = 0; i < dem_le; i++) {
        if (i > 0) printf(" ");
        printf("%d", le[i]);
    }
    printf("\n");
}

int main() {
    int n;
    int a[MAX];
    scanf("%d", &n);
    nhapmang(n, a);
    tachmang(n, a);
    return 0;
}
