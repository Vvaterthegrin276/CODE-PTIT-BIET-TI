#include <stdio.h>

int main(){
	int t;scanf("%d",&t);int dem=1;
	
	while(t--){
		int i,j;int a[100][100];
	int n,m;scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int tongmax1=-1;
	int xoahang=-1;
	for(i=0;i<n;i++){
		int sum=0;
		for(j=0;j<m;j++){
			sum+=a[i][j];
		}
		if(sum>tongmax1){
				tongmax1=sum;
				xoahang=i;
			}
	}
	int b[100][100];
	int n1=n-1;	int dem1=0;
	for(i=0;i<n;i++){
		if(i==xoahang) continue;
		for(j=0;j<m;j++){
			b[dem1][j]=a[i][j];
		}
		dem1++;
	}
	int tongmax2=-1;
	int xoacot=-1;
	for(j=0;j<m;j++){
		int sum=0;
		for(i=0;i<n1;i++){
			sum+=b[i][j];
			
		}
		if(sum>tongmax2){
				tongmax2=sum;
				xoacot=j;
		}
	}
	int m1=m-1;int c[100][100];
	for(i=0;i<n1;i++){
		int dem2=0;
		for(j=0;j<m;j++){
			if(j==xoacot) continue;
			c[i][dem2++]=b[i][j];
		}
	}
	printf("Test %d:\n",dem++);
	for(i=0;i<n1;i++){
		for(j=0;j<m1;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	}
	
	return 0;
}
