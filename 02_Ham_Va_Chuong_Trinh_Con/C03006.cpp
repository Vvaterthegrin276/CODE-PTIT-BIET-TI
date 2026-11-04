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
	int t;
	scanf("%d",&t);
	int count=1;
	while(t--){
		long long n;scanf("%lld",&n);
	long long i;
	long long tam=n;
	printf("Test %d: ",count++);
	for(i=2;i*i<=tam;i++){
		int dem=0;
		if(tam%i==0&&nto(i)){
			while(tam%i==0){
				tam=tam/i;
				dem++;	
			}
			printf("%d(%d) ",i,dem);
		}
		
	}
	if(tam>1) printf("%d(1)",tam);
	printf("\n");
	}
	
	return 0;
}
