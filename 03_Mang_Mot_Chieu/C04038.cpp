#include <stdio.h>

int main(){
	int n;scanf("%d",&n);
	int i,j;
	int a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++){
		int max=a[i];int k=i;
		for(j=i+1;j<n;j++){
			if(a[k]>a[j]){
				k=j;
			}
		}
		int p=a[k];
		a[k]=a[i];
		a[i]=p;
		for(j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
