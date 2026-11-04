#include <stdio.h>
int nto(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int ktranto(int n){
	while(n>0){
		int du=n%10;
		if(du!=2&&du!=3&&du!=5&&du!=7){
			return 0;
		}
		n=n/10;
	}
	return 1;
}

int main(){
	int t;scanf("%d",&t);
	int i,dem;
	while(t--){
		int m,n;scanf("%d %d",&m,&n);
		dem=0;
		for(i=m;i<=n;i++){
			if(nto(i)&&ktranto(i))
			dem++;
		}
		printf("%d\n",dem);
			
	}
	
	
	return 0;
}
