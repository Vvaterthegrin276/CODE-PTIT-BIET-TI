#include <stdio.h>

int main(){
	int n;scanf("%d",&n);
	int fib[10000];
	fib[0]=0;
	fib[1]=1;
	int i,j;int dem=2;
	for(i=0;dem<n*n;i++){
		fib[dem]=fib[dem-1]+fib[dem-2];
		dem++;
	}
	int tren=0,duoi=n-1;
	int trai=0,phai=n-1;
	int a[100][100];int k=0;
	while(tren<=duoi&&trai<=phai){
		for(j=trai;j<=phai;j++){
			a[tren][j]=fib[k++];
		}
		tren++;
		for(i=tren;i<=duoi;i++){
			a[i][phai]=fib[k++];
		}
		phai--;
		if(tren<=duoi){
			for(j=phai;j>=trai;j--){
				a[duoi][j]=fib[k++];
			}
			duoi--;
		}
		if(trai<=phai){
			for(i=duoi;i>=tren;i--){
				a[i][trai]=fib[k++];
			}
			trai++;
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
