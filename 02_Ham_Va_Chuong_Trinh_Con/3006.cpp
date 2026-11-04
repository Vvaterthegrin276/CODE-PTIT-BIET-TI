#include <stdio.h>
int nto(long n){
	long i;
	if(n<2){
		return 0;
	}
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		long n;scanf("%ld",&n);
	}
	return 0;
}
