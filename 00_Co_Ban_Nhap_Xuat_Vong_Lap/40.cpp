#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n<=1){
    	printf("0");
    	return 0;
	}
    int sum=0;
    int i;
    for (i=1;i<=n/2;i++){
    	if(n%i==0){
    		sum=sum+i;
		}
	}
	if (sum==n){
		printf("1");
	}
	else{
		printf("0");
	}
    return 0;
}
