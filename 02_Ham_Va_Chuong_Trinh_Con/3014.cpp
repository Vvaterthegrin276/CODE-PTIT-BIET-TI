#include <stdio.h>
long ucln(long a,long b){
	while(b!=0){
		long r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long bcnn(long a,long b){
	return a/ucln(a,b)*b;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long a,b;
		scanf("%ld %ld",&a,&b);
		printf("%ld %ld\n",bcnn(a,b),ucln(a,b));
		
		
	}
	
	return 0;
}
