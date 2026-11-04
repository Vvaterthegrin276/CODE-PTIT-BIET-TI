#include <stdio.h>

long long min(long long n){
	int k;
	long long sotam=n;
	long long mu=1;
	long long sum=0;
	while(sotam>0){
		k=sotam%10;
		if(k==6) k=5;
		sum=sum+k*mu;
		mu=mu*10;
		sotam=sotam/10;
	}	
	return sum; 
}
long long max(long long n){
	int k;
	long long sotam=n;
	long long mu=1;
	long long sum=0;
	while(sotam>0){
		k=sotam%10;
		if(k==5) k=6;
		sum=sum+k*mu;
		mu=mu*10;
		sotam=sotam/10;
	}
	return sum;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
	scanf("%lld %lld",&a,&b);
	long long ln=max(a)+max(b);
	long long bn=min(a)+min(b);
	printf("%lld %lld",bn,ln);
	printf("\n");
	}
	
	
	return 0;
}
