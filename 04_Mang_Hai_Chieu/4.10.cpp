#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int p=n*n;
	int x=1;int k=0;int m=n;
	int i,j;int a[100][100];
	while(x<=p){
		for(j=k;j<m;j++){
			a[k][j]=x++;
		}
		for(i=k+1;i<m;i++){
			a[i][m-1]=x++;
		}
		for(j=m-2;j>=k;j--){
			a[m-1][j]=x++;
		}
		for(i=m-2;i>=k+1;i--){
			a[i][k]=x++;
		}
		k++;
		m--;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
