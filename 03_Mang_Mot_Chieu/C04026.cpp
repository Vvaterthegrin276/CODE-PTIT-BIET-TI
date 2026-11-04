#include <stdio.h>
 
 
int main(){
	int n;scanf("%d",&n);
	int a[100];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int buoc =1;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
		printf("Buoc %d:  ",buoc++);
		int k;
		for(k=0;k<n;k++){
			printf("%d ",a[k]);
			
		}
		printf("\n");
		
	}
	
	
	return 0;
}


