#include <stdio.h>
void fibo(int n){
	long f[100];
	int i;
	f[0]=0;f[1]=1;
	if (n >= 1) printf("%lld ", f[0]);
    if (n >= 2) printf("%lld ", f[1]);
	for(i=2;i<n;i++){
		f[i]=f[i-1]+f[i-2];
			printf("%d ",f[i]);
	}
}



int main(){
	int n;scanf("%d",&n);
	fibo(n);
	
	return 0;
}
