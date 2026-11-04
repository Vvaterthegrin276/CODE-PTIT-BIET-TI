#include <stdio.h>
int fib(long long n){
	long long f[100];
	f[0]=0,f[1]=1;
	int i;
	if(n==0 || n==1)return 1;
	for(i=2;i<=100;i++){
		f[i]=f[i-1]+f[i-2];
		if(f[i]==n)return 1;
		else if(f[i]>n)return 0;
	}
}


int main(){
	long long n;
	scanf("%lld",&n);
	printf("%d\n",fib(n));
	return 0;
}
