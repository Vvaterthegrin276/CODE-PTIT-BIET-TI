#include <stdio.h>

int main(){
	int t;scanf("%d",&t);int count=1;
	while(t--){
		int n;scanf("%d",&n);
	int i;
	int tam=n;
	printf("Test %d: ",count++);
	for(i=2;i*i<=tam;i++){
		int dem=0;
		if(tam%i==0){
			while(tam%i==0){
				tam=tam/i;
				dem++;
			}
			printf("%d(%d) ",i,dem);
		}
	}
	if(tam>1){
		printf("%d(1)",tam);
	}
	printf("\n");
	} 
	
	
	
	return 0;
}
