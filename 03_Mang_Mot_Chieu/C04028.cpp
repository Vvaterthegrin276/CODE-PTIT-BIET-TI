#include <stdio.h>

int main(){
	int n;scanf("%d",&n);
	int a[100];int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			int k;
			for(k=i;k>j;k--){
				if(a[k]<a[j]){
					int m=a[k];
					a[k]=a[k-1];
					a[k-1]=m;
				}
			}
		}
		printf("Buoc %d: ",i);
		for(j=0;j<=i;j++){
			printf("%d ",a[j]);
		}
		if(i<n-1){
			printf("\n");
		}
	}
	

	
	return 0;
}
