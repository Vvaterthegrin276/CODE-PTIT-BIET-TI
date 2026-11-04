#include <stdio.h>

int main(){
	int n;scanf("%d",&n);
	int a[100][100];
	int i,j;int k=0;
	int p=n*n;
	int x=1;
	int tam=n;
	while(x<=p){
		for(j=k;j<tam;j++){
			a[k][j]=x++;
		}
		for(i=k+1;i<tam;i++){
			a[i][tam-1]=x++;
		}
		for(j=tam-2;j>=k;j--){
			a[tam-1][j]=x++;
		}
		for(i=tam-2;i>=k+1;i--){
			a[i][k]=x++;
		}
		k++;
		tam--;
		
		
		
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
