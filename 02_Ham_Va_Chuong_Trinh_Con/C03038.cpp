#include <stdio.h>

/*int nto(long long n){
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
		long long n;long long p;
	scanf("%lld %lld",&n,&p);
	long long sotam=n;
	long long mu=p;
	long long dem=0;
	if(!nto(p)){
		printf("0\n");
		continue;
	}
	while(sotam>0){
		sotam=sotam/p;
		dem=dem+sotam;
		
	}
	printf("%lld\n",dem);
	}
	
	return 0;
}*/

int main(){
	
	int t;scanf("%d",&t);
	while(t--){
		int n,p;scanf("%d %d",&n,&p);
	int mu=p;
	int sotam=n;
	int dem=0;
	while(sotam>0){
		sotam=sotam/mu;
		dem=dem+sotam;
		
		
	}
	printf("%d\n",dem);
	}
	
	
	return 0;
}
