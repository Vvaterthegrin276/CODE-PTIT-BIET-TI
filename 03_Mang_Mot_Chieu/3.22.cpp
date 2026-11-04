#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
			int n;scanf("%d",&n);
	int a[]={1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int dem=0;
	int i;
	for(i=0;i<10;i++){
		dem=dem+n/a[i];
		n=n%a[i];
	}
	printf("%d\n",dem);
	}

	
}
