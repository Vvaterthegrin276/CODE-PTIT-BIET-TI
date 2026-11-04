#include <stdio.h>
int check(int n){
	int i;
	if(n<2) return 0;
	int sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
		
	}
	if(sum==n) return 1;
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
		if(check(i)){
			printf("%d ",i);
		}
	}
	
	
	return 0;
}
