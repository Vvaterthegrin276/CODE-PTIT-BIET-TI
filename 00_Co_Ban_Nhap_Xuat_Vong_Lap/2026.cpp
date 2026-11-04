#include <stdio.h>
int main(){
	int m,n;scanf("%d %d",&m,&n);
	int i,j,val;
	for (i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			val=m-i+j-1;
			if(val>n-1){
				val=n-1;
			}
			printf("%c",'A'+val);
			
		}
		printf("\n");
	}	
	
	return 0;
}
