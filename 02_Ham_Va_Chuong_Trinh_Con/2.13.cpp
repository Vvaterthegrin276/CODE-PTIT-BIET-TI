#include <stdio.h>

int fib(long long n){
	if (n == 0 || n == 1) return 1;
	long long a=1;
	long long b=1;
	long long c;
	while(c<n){
		c=a+b;
		a=b;
		b=c;
	}
	if(c==n) return 1;
	return 0;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;
	scanf("%lld",&n);
	if(fib(n)) printf("YES\n");
	else printf("NO\n");
	}
	
	
	
	return 0;
}
