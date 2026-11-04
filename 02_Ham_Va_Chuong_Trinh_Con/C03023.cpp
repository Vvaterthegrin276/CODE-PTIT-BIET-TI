#include <stdio.h>
int kiemtra(int n){
	int tam;
	int sodao=0;
	int sotam=n;
	
	while(n>0){
		tam=n%10;
		sodao=sodao*10+tam;
		n=n/10;
	}
	if(sodao==sotam) return 1;
	return 0;
}
int khacchin(int n){
	int tam=0;
	while(n>0){
		tam=n%10;
		n=n/10;
		if(tam==9){
			return 0;
		}
	}
	return 1;
	
}
int main(){
	int n;
	scanf("%d",&n);
	int i;int dem=0;
	for(i=2;i<n;i++){
		if(kiemtra(i)&&khacchin(i)){
			printf("%d ",i);
			dem++;

		}
	}
	printf("\n");
	printf("%d",dem);
}
