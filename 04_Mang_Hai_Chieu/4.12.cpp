#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int trai=0,phai=n-1;
	int tren=0,duoi=n-1;
	int i,j;int x=n*n;int a[100][100];
	while(tren<=duoi&&trai<=phai){
		for(j=trai;j<=phai;j++){
			a[tren][j]=x--;
		}
		tren++;
		for(i=tren;i<=duoi;i++){
			a[i][phai]=x--;
		}
		phai--;
		if(tren<=duoi){
			for(j=phai;j>=trai;j--){
				a[duoi][j]=x--;
			}
			duoi--;
		}
		if(trai<=phai){
			for(i=duoi;i>=tren;i--){
				a[i][trai]=x--;
			}
			trai++;
		}
	}
	for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d", a[i][j]);
            }
            printf("\n");
        }
    
	
	
	return 0;
}
