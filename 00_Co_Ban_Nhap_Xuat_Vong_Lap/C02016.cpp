#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	
	for(i=1;i<=n;i++){
		for(j=0;j<i;j++){
				if(i%2==1){
					printf("%d",j*2+1);
				}
				else{
					printf("%d",(j+1)*2);
				}
			
		}
		printf("\n");
	}
	
	
	
	
	return 0;
	
}
