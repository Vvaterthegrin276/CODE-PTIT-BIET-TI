#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			printf("%c",'A'+2*j);
		}
		printf("\n");
	}
	return 0;
	
}
