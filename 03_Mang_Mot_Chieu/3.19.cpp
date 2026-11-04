#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int i,j,a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=0;
	for(i=0;i<n;i++){
		printf("Buoc %d: ",dem++);
		for(j=0;j<=i;j++){
			int k;
			for(k=j+1;k<=i;k++){
				if(a[k]<a[j]){
					int temp=a[j];
					a[j]=a[k];
					a[k]=temp;
				}
			}
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	
}

