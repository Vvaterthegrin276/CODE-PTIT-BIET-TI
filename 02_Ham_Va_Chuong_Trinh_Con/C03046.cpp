#include <stdio.h>
#include <math.h>
int kiemtra(int n){
	int tam;
	int sum=0;
	int sodao=0;
	int sotam=n;
	
	while(n>0){
		tam=n%10;
		sodao=sodao*10+n%10;
		sum=sum+n%10;
		n=n/10;
	}
	if(sodao==sotam&&sum%10==0) return 1;
	return 0;
}
int khacbon(int n){
	int tam=0;
	while(n>0){
		tam=n%10;
		n=n/10;
		if(tam==4){
			return 0;
		}
	}
	return 1;
	
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int p1=pow(10,n-1);int p2=pow(10,n);
		int i;
		for(i=p1;i<p2;i++){
			if(kiemtra(i)&&khacbon(i)){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
	
}
