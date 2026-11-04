#include <stdio.h>

long nghichdao(long n){
	int i=0;
	while(n>0){
		i=i*10+n%10;
		n=n/10;
	}
	return i;
}
long ucln(long a,long b){
	while(b!=0){
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		long n;scanf("%ld",&n);
		long k=nghichdao(n);
		if(ucln(n,k)==1) printf("YES\n");
		else printf("NO\n");
	}
	
	
	return 0;
}
