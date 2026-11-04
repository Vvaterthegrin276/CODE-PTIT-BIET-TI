#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
	scanf("%lld",&n);
	long long i;
	long long sotam=n;
	long long ntoln=1;
	for(i=2;i*i<=sotam;i++){
		if(sotam%i==0){
			ntoln=i;		   
			while(sotam%i==0){
				sotam=sotam/i;
			}
		}
	}
	if(sotam>1){
		printf("%lld\n",sotam);
	}
	else{
		printf("%lld\n",ntoln);
	}
	}
	
	
	return 0;
}
