#include <stdio.h>
#define MAX 100
void nhapmang2c(int n,int m,int a[MAX][MAX]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuly(int n,int m,int a[MAX][MAX]){
	int i,j;
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n,m;
	int a[MAX][MAX];
	scanf("%d %d",&n,&m);
	nhapmang2c(n,m,a);
	xuly(n,m,a);
	
	return 0;
}
