#include <stdio.h>
#include <math.h>

int main(){
	int n;scanf("%d",&n);
	int i,j;
	
	for(i=1-n;i<=n-1;i++){
		for(j=1-n;j<=n-1;j++){
			if(abs(i)>=abs(j)){
				printf("%d",abs(i)+1);
			}
			else{
				printf("%d",abs(j)+1);
			}		
		}
		printf("\n");
	}
	return 0;
}
