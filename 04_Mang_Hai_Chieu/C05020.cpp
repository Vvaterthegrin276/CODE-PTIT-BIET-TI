#include <stdio.h>

int main(){
	long long fib[1000];
	int dem=0;
	fib[0]=0; fib[1]=1; dem=2;
	for(int i=2; i<1000; i++){
    		fib[dem] = fib[dem-1] + fib[dem-2];
    		dem++;
	}
	int n;scanf("%d",&n);
	int k=0;long long a[100][100];
	int x=0;int tam=n;
	int p=n*n;
	int i,j;
	while(x<p){
		for(j=k;j<tam;j++){
			a[k][j]=fib[x++];	
		}
		for(i=k+1;i<tam;i++){
			a[i][tam-1]=fib[x++];
		}
		for(j=tam-2;j>=k;j--){
			a[tam-1][j]=fib[x++];
		}
		for(i=tam-2;i>=k+1;i--){
			a[i][k]=fib[x++];
		}
		tam--;
		k++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
 	
	return 0;
}
