#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
	scanf("%d",&n);
	int dau,cuoi;
	cuoi=n%10;
	int a;
	while(n>0){
		a=n%10;
		n=n/10;
	}
	dau=a;
	if(dau==cuoi){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	}
	
	return 0;
}
