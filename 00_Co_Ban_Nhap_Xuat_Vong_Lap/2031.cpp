#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++){
		k=n-i;
		for(j=0;j<k;j++){
			printf("%c",'@' + k + j-1);
		}
		printf("\n");
	}
	return 0;
}
