#include <stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			printf("~");
		}
		if(i==0 || i==n-1){
			for(j=0;j<m;j++){
				printf("*");
			}
		}
		else{
			printf("*");
			for(j=0;j<m-2;j++){
				printf(".");
			}
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
	}
