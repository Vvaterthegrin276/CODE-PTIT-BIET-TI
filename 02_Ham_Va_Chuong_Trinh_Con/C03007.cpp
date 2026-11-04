#include <stdio.h>
int nto(long long n){
	long long i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int thuannghich(long long n){
	long long i;
	int tam;
	long long sodao=0;
	long long sotam=n;
	while(n>0){
		tam=n%10;
		sodao=sodao*10+tam;
		n=n/10;
	}
	if(sodao==sotam) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long n,m;
	
	scanf("%lld %lld",&n,&m);
	long long i;
	int dem=0;
	for(i=n;i<=m;i++){
		if(thuannghich(i)&&nto(i)){
			printf("%lld ",i);
			dem++;
			if(dem%10==0) printf("\n");
		}
	}
        if(t > 0) printf("\n");	
	}
	
	
	
	
	return 0;
}
