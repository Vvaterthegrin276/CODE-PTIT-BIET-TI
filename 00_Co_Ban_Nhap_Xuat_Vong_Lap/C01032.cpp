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
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
	long long i;
	long long tich=1;
	long long tam=n;
	if(nto(n)) printf("%lld\n",n);
	else{
		for(i=2;i*i<=tam;i++){
			
			if(tam%i==0&&nto(i)){
				tich=tich*i;
				while(tam%i==0){
					tam=tam/i;
					
				}			   
		}
		
	}
	if(tam>1){
		printf("%lld\n",tam*tich);
	}
	else{
		printf("%lld\n",tich);
	}
	
	}
	}
	
	
	
	
	return 0;
}

