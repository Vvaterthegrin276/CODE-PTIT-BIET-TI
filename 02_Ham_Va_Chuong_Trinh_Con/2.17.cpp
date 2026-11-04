#include <stdio.h>

int nto(int n){
	int i;
	if(n<2)return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
	
}

int fib(int n){
	if(n==0||n==1) return 1;
	int tam=n;
	int a=0;
	int b=1;
	int c=1;
	while(c<n){
		c=a+b;
		a=b;
		b=c;
	}
	if(c==n) return 1;
	return 0;
}

int tong(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	if(fib(sum)) return 1;
	return 0;
}

int main(){
	int a,b;scanf("%d %d",&a,&b);
	if(a>b){
		int tam=a;
		a=b;
		b=tam;
	}
	int i;
	for(i=a;i<=b;i++){
		if(nto(i)&&tong(i)) printf("%d ",i);
	}
	
	
	
	return 0;
}
