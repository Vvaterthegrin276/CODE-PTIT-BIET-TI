#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int i,j,a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem=1;
	for(i=0;i<n-1;i++){
		int ok=0;
		for(j=0;j<n-i-1;j++){
			 if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                ok=1;
            }
		}
		if(ok==0) break;
		int k;
		printf("Buoc %d: ",dem++);
		for(j=0;j<n;j++){
			printf("%d ",a[j]);
		}
		printf("\n");
	}
	
	
}
