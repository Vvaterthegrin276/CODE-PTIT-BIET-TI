#include <stdio.h>

int main(){
	int i,j;int a[100][100];
	int n;scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=i;j<=i;j++){
			int temp=a[i][j];
			a[i][j]=a[i][n-i-1];
			a[i][n-i-1]=temp;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
