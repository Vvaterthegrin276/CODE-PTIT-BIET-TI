#include <stdio.h>
#define MAX 100
int main(){
	int t;scanf("%d",&t);
	int i;
	long long f[100];
	f[1]=1;f[2]=1;
	for(i=3;i<93;i++){
		f[i]=f[i-2]+f[i-1];
	}
	while(t--){
		int a,b;
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++){
			printf("%lld ",f[i]);
		}
		printf("\n");
	}
	
	return 0;
}
