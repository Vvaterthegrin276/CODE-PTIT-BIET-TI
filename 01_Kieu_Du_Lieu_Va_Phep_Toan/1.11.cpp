#include <stdio.h>
int nto(long long n){
	long long i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1;
	
}

int  main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(nto(n)) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
