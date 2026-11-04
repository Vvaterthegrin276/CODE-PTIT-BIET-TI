#include <stdio.h>

int main(){
	int n;scanf("%d",&n);
	int p=1;
	int tam=n;
	int dem=0;
	while(tam>0){
			 
		tam=tam/10;
		dem++;
	}
	int i;
	for(i=1;i<dem;i++) p=p*10;
	printf("%d %d",n/p,n%10);
	
	return 0;
}
