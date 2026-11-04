#include <stdio.h>
int main(){
	int m,n;scanf("%d %d",&m,&n);
	int i,j;
	int val, maxval;
	maxval=n-1;
	for (i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			val=i+j-2;
			if(val>maxval){
				val=maxval;
			}
			printf("%c",'@'+val);
		}
		printf("\n");
	}
	
	return 0;
}
