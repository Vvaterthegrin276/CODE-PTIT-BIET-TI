#include <stdio.h>
int main(){
	int t;int dem=1;
	scanf("%d",&t);
	while(t--){
		int m,n;
	scanf("%d %d",&m,&n);
	int i,j;
	int a[100][100],b[100][100];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[j][i] = a[i][j];
		}
	}
	int c[100][100]={0};
	int k;
	
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			for(k=0;k<n;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	printf("Test %d:\n",dem++);
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	}
	
	return 0;
}
