#include <stdio.h>

int main(){
	int i,j;int a[100][100];
	int n,m;scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int x,y;scanf("%d %d",&x,&y);
	for(i=1;i<=n;i++){
		int temp=a[i][x];
		a[i][x]=a[i][y];
		a[i][y]=temp;
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
