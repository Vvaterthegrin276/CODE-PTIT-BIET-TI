#include <stdio.h>


int main(){
	int t;scanf("%d",&t);int dem=1;
	while(t--){
		int n;
	scanf("%d",&n);
	int i,j;int a[100];int b[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(b[i]<b[j]){
				int tam=b[i];
				b[i]=b[j];
				b[j]=tam;
			}
		}
	}
	printf("Test %d:\n",dem++);
	for(i=0;i<n;i++){
		printf("%d %d ",a[i],b[i]);
 		
	}
	printf("\n");
	}
	
	
	return 0;
}
