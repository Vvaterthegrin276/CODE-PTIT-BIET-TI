#include <stdio.h>

int main(){
	int n;scanf("%d",&n);
	long long a = 0, b = 1;
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a);
		long long c=a+b;
		a=b;
		b=c;
		
	}
	return 0;
}
