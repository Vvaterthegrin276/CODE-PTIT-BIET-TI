#include <stdio.h>
int nto(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int x;scanf("%d",&x);
	int n[10000];
	int i,j;int dem=0;
	for(i=2;dem<x*x;i++){
		if(nto(i)){
			n[dem++]=i;
		}
	}

	int tren=0,duoi=x-1;
	int trai=0,phai=x-1;
	int a[100][100];int k=0;
	while(tren<=duoi&&trai<=phai){
		for(j=trai;j<=phai;j++){
			a[tren][j]=n[k++];
		}
		tren++;
		for(i=tren;i<=duoi;i++){
			a[i][phai]=n[k++];
		}
		phai--;
		if(tren<=duoi){
			for(j=phai;j>=trai;j--){
				a[duoi][j]=n[k++];
			}
			duoi--;
		}
		if(trai<=phai){
			for(i=duoi;i>=tren;i--){
				a[i][trai]=n[k++];
			}
			trai++;
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
