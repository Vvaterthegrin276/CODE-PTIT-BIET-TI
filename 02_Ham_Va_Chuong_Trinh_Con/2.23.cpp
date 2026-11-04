#include <stdio.h>


int tongchuso(long long n){
	long long i;
	int tam;
	int tong=0;
	while(n>0){
		tam=n%10;
		tong += tam;
		n=n/10;
	}
	return tong;
}
int main(){
	long long n;
	scanf("%lld",&n);
	long long i;
	long long tong =0;
	long long sotam=n;
	long long tong1=0;
	for(i=2;i*i<=sotam;i++){
		if(sotam%i==0){
			int dem =0;
			while(sotam%i==0){
				sotam=sotam/i;
				dem++;	
			}
			tong1=tong1+tongchuso(i)*dem;
		}
		if(sotam<10){
			tong=tong1+sotam;
		}
		else if(sotam>10){
			long long tong2=tongchuso(sotam);
			tong=tong1+tong2;
		}
	}
	if(tongchuso(n)==tong){
		printf("YES");
	}else printf("NO");
	return 0;
}

