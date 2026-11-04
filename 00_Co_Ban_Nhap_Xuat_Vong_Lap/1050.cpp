#include <stdio.h>
#define MAX 40

int main() {
    int w, h, i, j;
    char a[MAX][MAX];
    scanf("%d %d", &w, &h);
    
    // dien toan bo mang ban khoang trong
    for (i = 0; i < h; i++)
        for (j = 0; j < w; j++)
            a[i][j] = ' ';
    
    // dien dong dau dong cuoi
    for (j = 0; j < w; j++) {
        a[0][j] = '*';
        a[h-1][j] = '*';
    }
    
    // dien cot dau cot cuoi
    for (i = 0; i < h; i++) {
        a[i][0] = '*';
        a[i][w-1] = '*';
    }
    
    // in mang
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++)
            printf("%c", a[i][j]);
        printf("\n");
    }
    
    return 0;
}
