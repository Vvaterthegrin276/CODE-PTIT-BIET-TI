#include <stdio.h>
int nto(long long n){
	long long i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
	scanf("%lld",&n);
	long long tam=n;
	long long i;
	long long uln=1;
	for(i=2;i*i<=tam;i++){
		if(nto(i)){
			if(tam%i==0){
				uln=i;
				while(tam%i==0){
					tam=tam/i;
					
				}
			}
		}
	}
	if(tam>1){
		printf("%lld\n",tam);
	}
	else if (tam==0){
		printf("%lld\n",uln);
	}
	}
	
	
	return 0;
}
