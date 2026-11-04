#include <stdio.h>
int main(){
	int m,n,i,j,k;scanf("%d %d",&m,&n);
	int max;
	if(m>n){
		max=m;
	}else{
		max=n;
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			k=max-i-j+1;
			if(k<0){
				k=-k;
			}
			printf("%d",k+1);
		}
		printf("\n");
	}
	return 0;
}
