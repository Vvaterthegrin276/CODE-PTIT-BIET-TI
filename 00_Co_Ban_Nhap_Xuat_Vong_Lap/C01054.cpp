#include <stdio.h>
int sum(int n){
	int i;
	int tam=n;
	int sum=0;

	for(i=2;i*i<=tam;i++){
		if(tam%i==0){
			int dem=0;
			while(tam%i==0){
				tam=tam/i;
				dem++;
			}
			sum=sum+i*dem;
		}
		
	}
	if(tam>1){
		sum=sum+tam;
	}
	return sum;
}

int main(){
	int t;scanf("%d",&t);
	int i;
	long long tong=0;
	for(i=0;i<t;i++){
		int x;scanf("%d",&x);
		tong=tong+sum(x);
	}
	printf("%lld",tong);
	
	
	
	return 0;
}
