#include <stdio.h>
int main(){
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	int max;
    if (m > n) {
        max = m;
    } else {
        max = n;
    }
    for(i=1;i<=m;i++){
    	for(j=1;j<=n;j++){
    		int min;
    		if (i < j) {
                min = i;
            } else {
                min = j;
            }
            k=max-min;
            printf("%c",'a'+k);
		}
		printf("\n");
	}
	
    return 0;
}
