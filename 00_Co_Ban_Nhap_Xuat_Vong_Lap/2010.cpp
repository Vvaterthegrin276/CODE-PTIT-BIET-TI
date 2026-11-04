#include <stdio.h>
int main(){
	int n,m;scanf("%d %d",&n,&m);
	int i,j,k;
	for(i=1;i<=n;i++){
		printf("%d",i);
		if(i<=m){
			for(k=i+1;k<=m;k++){
				printf("%d",k);
			}
			for(k=i-1;k>=1;k--){
				printf("%d",k);
			}
		}
		else{
			for(k=m-1;k>=1;k--){
				printf("%d",k);
			}
		}
		printf("\n");
	}
	
	return 0;
}
