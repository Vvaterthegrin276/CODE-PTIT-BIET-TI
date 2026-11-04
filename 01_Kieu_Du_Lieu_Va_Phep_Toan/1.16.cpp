#include<stdio.h>


int main(){
	int n;scanf("%d",&n);
	long long tich=1;
	while(n>0){
		int tam=n%10;
		tich=tich*tam;
		n=n/10;
	}
	printf("%lld",tich);
	
	
	return 0;
}
