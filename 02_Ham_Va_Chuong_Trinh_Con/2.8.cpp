#include <stdio.h>
int check(int n){
	int i;
	if(n<2) return 0;
	int sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
		
	}
	if(sum==n) return 1;
	return 0;
}


int main(){
	int n;scanf("%d",&n);
	int i;
	for(i=2;i<n;i++){
		if(check(i)){
			printf("%d ",i);
		}
	}
	
	
	return 0;
}
