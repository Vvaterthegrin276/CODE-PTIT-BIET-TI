#include <stdio.h>
int main(){
	int t;scanf("%d",&t);
	int dem=1;
	while(t--){
		int N;scanf("%d",&N);
	int a[20][20]={0};
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<=i;j++){
			a[i][j]=j+1;
		}
	}
	int b[20][20];
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			b[j][i]=a[i][j];
		}
	}
	int c[20][20]={0};
	int k;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			for(k=0;k<N;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
		
	}
	printf("Test %d:\n",dem++);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	}
	
	return 0;
}

