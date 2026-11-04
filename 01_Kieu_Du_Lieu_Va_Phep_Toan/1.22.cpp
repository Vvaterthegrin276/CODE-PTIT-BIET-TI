#include <stdio.h>


int main(){
	int t;scanf("%d",&t);int tong=0;
	while(t--){
		int n;
	scanf("%d",&n);
	int tam=n;
	int i;int sum=0;
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
		tong=tong+sum;
	}
	printf("%d",tong);
	return 0;
}
