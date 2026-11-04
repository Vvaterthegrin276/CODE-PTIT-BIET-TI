#include <stdio.h>
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	long long i,sum=0;
	if (b>a){
 	for(i=a;i<=b;i++){
		sum=sum+i;
	}
	}
	else if(a>b){
	for(i=b;i<=a;i++){
		sum=sum+i;
	}
	}
	printf("%lld",sum);
	return 0;
}
