#include <stdio.h>

int check(int n){
	int sum=0;int tam=n;
	while(tam>0){
		sum=sum*10+tam%10;
		if(tam==9) return 0;
		tam=tam/10;
	}
	if(sum==n)return 1;
	return 0;
}
int main(){
	int n;scanf("%d",&n);
	int i;int dem=0;
	for(i=2;i<n;i++){
		if(check(i)) {
			printf("%d ",i);
			dem++;
		}
	}
	printf("\n%d",dem);
}
