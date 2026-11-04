#include <stdio.h>

int nto(int n){
	if(n<2)return 0;
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int lanto[1000];
	int i,j;
	int dem=0;
	
	for(i=0;i<1000;i++){
		if(nto(i)){
			lanto[dem++]=i;
		}
	}
	int t;
	scanf("%d",&t);int count=1;
	while(t--){
		int n;scanf("%d",&n);
	int k=0;int a[100][100];
	int p=n*n;
	int x=0;
	int tam=n;
	while(x<p){
		for(j=k;j<tam;j++){
			a[k][j]=lanto[x++];
		}
		for(i=k+1;i<tam;i++){
			a[i][tam-1]=lanto[x++];
		}
		for(j=tam-2;j>=k;j--){
			a[tam-1][j]=lanto[x++];
		}
		for(i=tam-2;i>=k+1;i--){
			a[i][k]=lanto[x++];
		}
		tam--;
		k++;
	}
	printf("Test %d:\n",count++);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	}
	
}
