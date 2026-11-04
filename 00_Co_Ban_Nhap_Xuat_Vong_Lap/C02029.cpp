#include <stdio.h>


int main(){
	int n;scanf("%d",&n);
	int i,j;
	char c='A';
	for(i=0;i<n;i++){
		int t=i;
		for(j=0;j<=i;j++){
			printf("%c ",'@'+t+1);
			t=t+n-j-1;
		}
		printf("\n");
	}
	
	return 0;
}
