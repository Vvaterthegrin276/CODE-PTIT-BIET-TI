#include <stdio.h>
#include <math.h>
int check(long long n){
	long long tam=n;
	long long sum=0;
	int tong=0;
	while(tam>0){
		sum=sum*10+tam%10;
		tong=tong+tam%10;
		tam=tam/10;
		
	}
	if(sum==n&&tong%10==0) return 1;
	return 0;
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
	long long p1=pow(10,n-1);
	long long p2=pow(10,n);
	int dem=0;
	int i;
	
	for(i=p1;i<=p2;i++){
		if(check(i)) dem++;
	}
	printf("%d\n",dem);
	
		
	}
	
	return 0;
}
