#include <stdio.h>


int main(){
	int n;scanf("%d",&n);
	int a[100];
	int i,j;
	int buoc=1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		int p=i;// gia su vitri nho nhat
		
		for(j=i+1;j<n;j++){
			if(a[p]>a[j]){
				p=j;// doi vitri nho nhat
			}
		}
		int k=a[p];
		a[p]=a[i];
		a[i]=k;
		printf("Buoc %d: ",buoc++);
		for(j=0;j<n;j++){
			printf("%d ",a[j]);
		}	
		printf("\n");
	}
	
		
	
	return 0;
}
