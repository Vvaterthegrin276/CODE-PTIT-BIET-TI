#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int m,n;scanf("%d %d",&m,&n);
	int i,j; int a[100][100];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int dau=0,cuoi=m-1,trai=0,phai=n-1;
	while(dau<=cuoi&&trai<=phai){
		for(j=trai;j<=phai;j++){
			printf("%d ",a[dau][j]);
		}
		dau++;
		for(i=dau;i<=cuoi;i++){
			printf("%d ",a[i][phai]);
		}
		phai--;
		if(dau<=cuoi){
			for(j=phai;j>=trai;j--){
				printf("%d ",a[cuoi][j]);
			}
			cuoi--;
		}
		if(trai<=phai){
			for(i=cuoi;i>=dau;i--){
				printf("%d ",a[i][trai]);
			}
			trai++;
		}
	}
	printf("\n");
	}
	
	
	
	return 0;
}
