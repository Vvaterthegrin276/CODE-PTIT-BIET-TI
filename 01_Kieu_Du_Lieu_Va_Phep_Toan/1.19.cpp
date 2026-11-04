#include <stdio.h>

long long gt(int n){
	int i;
	long long tich=1;
	for(i=1;i<=n;i++){
		tich=tich*i;
	}
	return tich;
}

int main(){
	long long n;scanf("%lld",&n);
	long long sum=0;
	if(n==0){
		printf("0");
		return 0;
	}
	long long tam=n;
	while(tam>0){
		int c=tam%10;
		sum=sum+gt(c);
		tam=tam/10;
	}
	if(sum==n){
		printf("1");
	}
	else printf("0");

	
	
	return 0;
}
