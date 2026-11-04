#include <stdio.h>
#define MAX 100
int fibo(long long n){
	long long i;
	long long f[MAX];
	f[0]=1,f[1]=1;
	for(i=2;i<MAX;i++){
		f[i]=f[i-1]+f[i-2];
	}
	for(i=0;i<MAX;i++){
		if(f[i]==n) return 1;
	}
	return 0;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		if(fibo(n)) printf("YES\n");
		else printf("NO\n");
	}
	
	
	return 0;
}
