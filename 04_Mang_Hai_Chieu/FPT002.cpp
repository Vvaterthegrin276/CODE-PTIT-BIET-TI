#include <stdio.h>
#define MAX 100	
int main(){
	int m,n,p,q;
	scanf("%d %d %d %d",&m,&n,&p,&q);
	int a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
	int i,j,k,h;
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
	for(i=1;i<=p;i++){
		for(j=1;j<=q;j++){
			scanf("%d",&c[i][j]);
		}
	}
	int ab[MAX][MAX]={0};
	for(i=1;i<=m;i++){
		for(j=1;j<=p;j++){
			for(k=1;k<=n;k++){
				ab[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	int d[MAX][MAX]={0};
	for(i=1;i<=m;i++){
		for(j=1;j<=q;j++){
			for(k=1;k<=p;k++){
				d[i][j]+=ab[i][k]*c[k][j];
			}
		}
	}
	for(i=1;i<=m;i++){
		for(j=1;j<=q;j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}

