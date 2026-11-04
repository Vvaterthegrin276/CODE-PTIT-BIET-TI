#include <stdio.h>
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int dem=0;
	int x=2;
	while(x<=n){
		dem=dem+n/x;
		x*=2;	
	}
	if(dem>=k) printf("Yes\n");
	else printf("No\n");
	return 0;
}
