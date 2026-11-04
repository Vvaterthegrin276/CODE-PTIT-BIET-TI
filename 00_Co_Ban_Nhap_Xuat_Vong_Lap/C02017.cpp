#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=2*i-1;j++){
			if(i>=j){
				printf("%d",2*j-1);
			}
			else{
				printf("%d",2*(2*i-j)-1);
			}
		}
		printf("\n");
	}
	
	return 0;
}
