#include <stdio.h>
#define MAX 100
int nto(int n){
	if(n<2) return 0;
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int a[MAX][MAX],b[MAX][MAX];
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(nto(a[i][j])){
				b[i][j]=1;
			}
			else b[i][j]=0;
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
