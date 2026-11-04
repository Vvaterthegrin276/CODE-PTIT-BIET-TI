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
	int n;
	scanf("%d",&n);
	int i;int dem=0;
	for(i=2;i<=n;i++){
		int sum=0;
		if(nto(i)){
			int t=i;
			while(t>0){
				sum=sum+t%10;
				t=t/10;
			}
			
			if(sum%5==0){
				printf("%d ",i);
				dem++;
		 	}
		}
	}
	printf("\n");
	printf("%d",dem);
	return 0;
}
