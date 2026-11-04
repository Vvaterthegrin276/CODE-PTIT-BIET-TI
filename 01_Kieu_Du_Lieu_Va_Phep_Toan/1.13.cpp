#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		long n;
	scanf("%ld",&n);
	long i,j;
	long tam=n;
	for(i=2;i*i<=tam;i++){
		if(tam%i==0){
			long dem=0;
			while(tam%i==0){
				tam=tam/i;
				dem++;
			}
			for(j=0;j<dem;j++){
				printf("%d ",i);
			}
		}
	}
	if(tam>1){
		printf("%ld\n",tam);
	}
	}
	
	
	
	return 0;
}
