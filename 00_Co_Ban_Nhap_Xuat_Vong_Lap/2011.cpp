#include <stdio.h>
int main(){
	int n,m;scanf("%d %d",&n,&m);
	int i,j,k;
	for (i=1;i<=n;i++){
		if(i<=m){
			for(j=i;j<=m;j++){
				printf("%d",j);
			}
			for(k=m-1;k>=m-i+1;k--){
				printf("%d",k);
			}
		}else{
			for(j=i;j>=i-m+1;j--){
				printf("%d",j);
			}
		}
		printf("\n");
	}
	
	return 0;
}
