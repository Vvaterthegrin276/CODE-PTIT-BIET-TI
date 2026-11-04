#include <stdio.h>
int nto(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
	
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
	int i;
	for(i=2;i<=n/2;i++){
		if(nto(i)&&nto(n-i)) printf("%d %d ",i,n-i);
	}
	printf("\n");
	}
	
	return 0;
}
