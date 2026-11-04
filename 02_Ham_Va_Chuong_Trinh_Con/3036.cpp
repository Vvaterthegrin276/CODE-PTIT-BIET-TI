#include <stdio.h>
long long nghichdao(long long n){
	long long rev=0;
	while(n>0){
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}
int thuannghich(long long n){
	return n==nghichdao(n);
}
int tongle(long long n){
	int tong=0;
	while(n>0){
		tong=tong+n%10;
		n=n/10;
	}
	if(tong%2==1) return 1;
	return 0;
}
int chusole(long long n){
	while(n>0){
		int i;
		i=n%10;
		if(i%2==0)return 0;
		n=n/10;
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
		if(thuannghich(n)&&chusole(n)&&tongle(n)) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
