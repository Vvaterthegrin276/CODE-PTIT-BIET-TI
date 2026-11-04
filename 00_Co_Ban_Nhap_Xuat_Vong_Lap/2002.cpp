#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i;
    for (i = n; i >= 1; i--) {
    	int j;
        for (j = 1; j < i; j++)
            printf("~");
   		for (j = 1; j <=n; j++)
   			printf("*");
        printf("\n");
    }
    return 0;
}
