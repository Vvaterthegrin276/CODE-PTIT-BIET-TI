#include <stdio.h>
int chan(long long n){
	long long tam=n;
	while(tam>0){
		int du=tam%10;
		if(du%2==1) return 0;
		tam=tam/10;
	}
	return 1;
}


int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
	if(chan(n)) printf("YES\n");
	else printf("NO\n");
	}
	
	return 0;
}
