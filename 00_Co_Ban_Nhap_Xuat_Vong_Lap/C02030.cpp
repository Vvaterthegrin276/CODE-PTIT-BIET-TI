#include <stdio.h>
#include <math.h>
int main(){
	int n;scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=2*i-1;j++){
			if (j == 1 || j == 2 * i - 1) {
                printf("@");
            }
            else if(i>=j){
            	printf("%c",'B'+2*(j-2));
			}
			else {
				printf("%c",'B'+2*(2*i-j-2));
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
