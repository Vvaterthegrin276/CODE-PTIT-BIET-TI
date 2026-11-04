#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
	long long i;
	long long temp=n;long long ntln=1;
	for(i=2;i*i<=temp;i++){
		if(temp%i==0){
			ntln=i;
			while(temp%i==0){
				temp=temp/i;
			}
		}
	}
	if(temp>1){
		printf("%lld\n",temp);
	}
	else{
		printf("%lld\n",ntln);
	}
	}
	
	
	
	return 0;
}
