#include <stdio.h>
#include <math.h>
int ktra(int n){
	int tam;
	int muoi=10;
	while(n>0){
		tam=n%10;
		if(tam>muoi) return 0;
		muoi=tam;
		n=n/10;
	}
	return 1;
	
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;
	scanf("%d",&n);
 	int i;
 	int p1,p2;
 	p1=pow(10,n-1);p2=pow(10,n);
 	for(i=p1;i<p2;i++){
 		if(ktra(i)) printf("%d ",i);
	}
	printf("\n");
	}

	
	
	return 0;
}
