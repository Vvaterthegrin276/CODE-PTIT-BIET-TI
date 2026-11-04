#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
	int tam=n;int sum=0;
	if(n<10){
		printf("NO\n"); return 0;
	} 
	while(tam>0){
		int m=tam%10;
		sum=sum+m;
		tam=tam/10;
	}
	if(sum%10==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	}
	
	
}
