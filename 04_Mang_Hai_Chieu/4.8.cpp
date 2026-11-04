#include <stdio.h>

int main(){
	int i,j;int a[100][100];
	int n,m;scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int b[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[j][i]=a[i][j];
		}
	}
	int c[100][100];int k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
