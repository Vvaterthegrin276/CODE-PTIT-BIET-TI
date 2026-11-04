#include <stdio.h>
int main(){
	int m,n,i,j,k;scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(j<=n-i+1){
				printf("%c",'A'+i+j-2);
			}
			else{
				printf("%c",'A'+n-j);
			}
		}
		printf("\n");
	}
	
	return 0;
}
