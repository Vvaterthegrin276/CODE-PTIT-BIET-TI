#include <stdio.h>
#define MAX 100

int main(){
	int n;scanf("%d",&n);
	//int a[MAX][MAX];
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i>=j) printf("0 ");
			else printf("%d ",j-i);
		}
		printf("\n");
	}
	
	return 0;
}
