#include <stdio.h>


int main(){
	int n;scanf("%d",&n);
	int a[100][100]={0};int d=1;
	int i,j;
	
	for(i=0;i<n;i++){
		
		for(j=i;j<n;j++){
			a[j][i]=d;
		}
		d++;
	}
	int b[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[j][i]=a[i][j];
		}
	}
	int c[100][100];
	int k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
