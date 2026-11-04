#include <stdio.h>
int nto(long long n){
	long long i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1;
	
}
int main(){
	long long n;scanf("%lld",&n);
	long long i;
	long long s=1;
	if(nto(n)) printf("%lld",n);
	else{
		long long tam=n;
		for(i=2;i*i<=tam;i++){
		if(tam%i==0&&nto(i)){
			s=s*i;	  
			 while (tam % i == 0) tam /= i; 
		}
	}
	if(tam>1){
		s=s*tam;
	}
	printf("%lld",s);
	
	}
	
	return 0;
}
