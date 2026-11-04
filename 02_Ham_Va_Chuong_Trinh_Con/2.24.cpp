#include <stdio.h>
int nto(int n){
	int i;
	if(n<2)return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int ktra(int n){
	int tam=n;
	int sum=0;
	while(tam>0){
		int du=tam%10;
		sum=sum+du;
		if(!nto(du)) return 0;
		tam=tam/10;
	}
	return 1;
}
int ktra2(int n){
	int tam=n;
	int sum=0;
	while(tam>0){
		int du=tam%10;
		sum=sum+du;
		tam=tam/10;
	}
	if(nto(sum)) return 1;
	return 0;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a,b;
	scanf("%d %d",&a,&b);
	int dem=0;
	int i;
	for(i=a;i<=b;i++){
		if(nto(i)&&ktra(i)&&ktra2(i)) dem++;
	}
	printf("%d\n",dem);
	
	}
	
	
	return 0;
}
