#include <stdio.h>
int main(){
	int m,n;scanf("%d %d",&m,&n);
	int i,j,k;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			k=i-j;
			if(k<0){
				k=-k;
			}
			printf("%d", k + 1);
		}
		printf("\n");
	}
	
	return 0;
}
