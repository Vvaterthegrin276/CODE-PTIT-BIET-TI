#include <stdio.h>
int ucln(int a,int b){
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int nto(int n){
	int i;
	if(n<2)return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int sum(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a,b;scanf("%d %d",&a,&b);
		int uc=ucln(a,b);
		int s=sum(uc);
		if(nto(s))printf("YES\n");
		else printf("NO\n");
		
	}
	
	
	
	
	return 0;
}
