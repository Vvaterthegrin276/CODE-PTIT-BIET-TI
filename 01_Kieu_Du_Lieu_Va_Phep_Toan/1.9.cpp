#include <stdio.h>
#include <math.h>
int main() {
    int t;
    scanf("%d",&t);
    int sum=0;
    int a;
    while(t--){
    	int n;scanf("%d",&n);
    	while(n>0){
    		a=n%10;
    		sum=sum+a;
    		n=n/10;
		}
		printf("%d\n",sum);
	}
	return 0;
}
