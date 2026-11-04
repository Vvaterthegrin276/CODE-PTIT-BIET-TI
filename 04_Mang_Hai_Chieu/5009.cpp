#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX][MAX]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuly(int n,int a[MAX][MAX]){
	int i,j;
	for(i=0;i<n;i++){
		int tam=a[i][i];
		a[i][i]=a[i][n-1-i];
		a[i][n-1-i]=tam;
		
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n;scanf("%d",&n);
	int a[MAX][MAX];
	nhapmang(n,a);
	xuly(n,a);
	return 0;
}

