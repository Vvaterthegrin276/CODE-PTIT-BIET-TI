#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[100];
	int i,j,n;scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int sotrc=-1;
	int dem=0;
	for(i=0;i<n;i++){
		if(a[i]>sotrc){
			dem++;
			sotrc=a[i];
			
		}
	}
	printf("%d\n",dem);
	
	}
	
	
	return 0;
}
