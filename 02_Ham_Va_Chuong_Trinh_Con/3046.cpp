#include <stdio.h>
int thuannghich(long long n){
	long long rev =0,m=n;
	while (m>0){
		rev=rev*10+m%10;
		m/=10;
	}
	return n==rev;
}
int khong4(long long n){
	while(n>0){
		if(n%10==4) return 0;
		n=n/10;
	}
	return 1;
	
}

int tongcs(long long n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int t;scanf("%d",&t);
	int i;
	while(t--){
		int n;scanf("%d",&n);
		long long start;
		int i;
		for(i=1;i<n;i++) start*=10;
		long long end=start*10;
		int first=1;
		for(long long i=start;i<end;i++);
			   
	}
	
	
	return 0;
}
