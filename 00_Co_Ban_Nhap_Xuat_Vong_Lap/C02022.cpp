#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int k=1;
	for(i=1;i<=n;i++){
		if(i%2==1){
			for(j=1;j<=i;j++){
				printf("%d ",k+j-1);
			}
		}
		else{
			int t=i;
			int c=j;
			int h=t/2;
			int m=t*h+h;
			for(c=1;c<=t;c++){
				
				printf("%d ",m--);
	
			}
		}
		k=k+i;
		printf("\n");
		
	}
	
	
	
	return 0;
}
