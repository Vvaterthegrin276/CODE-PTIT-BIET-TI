#include <stdio.h>
int tohop(int n,int k){
	if(k==0||k==n) return 1;
	return tohop(n-1,k-1)+tohop(n-1,k);
}

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ",tohop(i,j));

		}
		printf("\n");
	}	
	
	return 0;
}
