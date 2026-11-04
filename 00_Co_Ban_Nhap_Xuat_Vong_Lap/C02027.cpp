#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	char k='a';
	for(i=1;i<=n;i++){
		if(i%2==1){
			for(j=1;j<=i;j++){
				printf("%c ",k+j-1);
			}
		}
		else{
			int t=i;
			int c=j;
			int h=t/2;
			char m='a'+t*h+h-1;
			for(c=1;c<=t;c++){
				
				printf("%c ",m--);
	
			}
		}
		k=k+i;
		printf("\n");
		
	}
	
	
	
	return 0;
}
