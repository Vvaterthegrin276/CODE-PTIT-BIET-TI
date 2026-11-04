#include <stdio.h>
#include <string.h>
#include <math.h>

int tongchiamuoi(int n){
	int sum=0;
	int tam;
	int sodao=0;
	int sotam=n;
	while(n>0){
		tam=n%10;
		sodao=sodao*10+tam;
		sum=sum+tam;
		n=n/10;
	}
	if(sodao==sotam&&sum%10==0) return 1;
	return 0;
	
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
		int i;int dem=0;
		int p1=pow(10,n-1),p2=pow(10,n);
		for(i=p1;i<p2;i++){
			if(tongchiamuoi(i)){
				dem++;
			}
		}
		printf("%d\n",dem);
	}
	return 0;
}
