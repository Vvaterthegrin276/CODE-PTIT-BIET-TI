#include <stdio.h>

int ucln(int a,int b){
	if(b>a){
		int temp=b;
		b=a;
		a=temp;
	}
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long bcnn(int a,int b){
	return a/ucln(a,b)*b;
}

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",ucln(a,b));
	printf("%d\n",bcnn(a,b));
	return 0;
}
