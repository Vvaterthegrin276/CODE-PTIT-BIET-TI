#include <stdio.h>
int gt(int n){
	int tich=1;
	int i;
	for(i=1;i<=n;i++){
		tich=tich*i;
		
	}
	return tich;
}

int pas(int n,int k){
	int a=gt(n);
	int b=gt(k);
	int l=n-k;
	int c=gt(l);
	return a/(b*c);
}
int main(){
	int n;scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ",pas(i,j));
		}
		printf("\n");
	}
	
	return 0;
}
