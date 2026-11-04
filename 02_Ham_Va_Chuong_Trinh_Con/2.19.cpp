#include <stdio.h>

int check(int n){
	int sum=0;int tam=n;
	int tong=0;
	while(tam>0){
		sum=sum*10+tam%10;
		tong=tong+tam%10;
		tam=tam/10;
	}
	if(sum==n&&tong%10==8)return 1;
	return 0;
}
int sau(int n){
	while(n>0){
		if(n%10==6) return 1;
		n=n/10;
	}
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
		if(sau(i)&&check(i)) printf("%d",i);
	}
	
	return 0;
}
