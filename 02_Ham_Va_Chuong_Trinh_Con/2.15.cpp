#include <stdio.h>
int ucln(int a,int b){
	if(a>b){
		int tam=a;
		a=b;
		b=tam;
	}
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int bcnn(int a,int b){
	return a/ucln(a,b)*b;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a,b;scanf("%d %d",&a,&b);
		printf("%d %d\n",bcnn(a,b),ucln(a,b));
	}
	
	return 0;
}
