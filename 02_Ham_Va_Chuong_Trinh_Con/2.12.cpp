#include <stdio.h>

int fib(int n){
	if (n == 0 || n == 1) return 1;
	int a=1;
	int b=1;
	int c;
	while(c<n){
		c=a+b;
		a=b;
		b=c;
	}
	if(c==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	if(fib(n)) printf("1");
	else printf("0");
	
	
	return 0;
}
