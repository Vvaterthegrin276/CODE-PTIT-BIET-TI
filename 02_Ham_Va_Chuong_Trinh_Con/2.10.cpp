#include <stdio.h>

int gt(int n){
	int i;int tich=1;
	
	for(i=1;i<=n;i++){
		tich=tich*i;
	}
	return tich;
}
int check(int n){
	int tam=n;int sum=0;
	while(tam>0){
		int du=tam%10;
		sum=sum+gt(du);
		tam=tam/10;
	}
	if(sum==n) return 1;
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	int i;
	for(i=1;i<n;i++){
		if(check(i)){
			printf("%d ",i);
		}
	}
	
	return 0;
}
