#include <stdio.h>

int main(){
	int n;scanf("%d",&n);
	int i,j,a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		for(j=0;j<n;j++){
			printf("%d ",a[j]);			  
		
		}
		printf("\n");
		
	}
	
	return 0;
}
