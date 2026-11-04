#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long n;
	scanf("%ld",&n);
	double x,y;
	x=round(sqrt(n));
	y=sqrt(n);
	if(x==y) printf("YES\n");
	else printf("NO\n");
	
	}
	
	return 0;
}
