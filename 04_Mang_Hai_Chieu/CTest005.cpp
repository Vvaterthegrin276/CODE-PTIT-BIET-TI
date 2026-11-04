#include <stdio.h>
#define MAX 100
int main(){
	int m,n,p;
	scanf("%d %d %d",&m,&n,&p);
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
	int i,j,k;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=p;j++){
			for(k=1;k<=n;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=p;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
