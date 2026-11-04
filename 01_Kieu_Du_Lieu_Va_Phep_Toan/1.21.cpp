#include <stdio.h>

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
	int dem=0;
	if(n%2==0){
		while(n%2==0){
			dem++;
			n=n/2;
		}
	}
	printf("%d\n",dem);
	}
	
	
	return 0;
}
