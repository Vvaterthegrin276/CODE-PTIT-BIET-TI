#include <stdio.h>
int nto(long long n){
	long long i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tong(long long n){
	int tong=0;
	while(n>0){
		tong=tong+n%10;
		n=n/10;
	}
	return tong;
}
int fibo(long long n){
	long long a=0,b=1,c;
	if(n==0||n==1) return 1;
	while(b<n){
		c=a+b;
		a=b;
		b=c;
	}
	return (b==n); //b=n thi tra ve 1
}



int main(){
	long long n,m;scanf("%lld %lld",&n,&m);
	long long min,max;
	if(n > m){
        max = n;
        min = m;
    } else {
        max = m;
        min = n;
    }
	long long i;
	for(i=min;i<=max;i++){
		if(nto(i)==1 && fibo(tong(i))==1){
			printf("%lld ",i);
			
			
		}
	}
	
	
	
	return 0;
}
