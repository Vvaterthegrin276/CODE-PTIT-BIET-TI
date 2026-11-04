#include<stdio.h>
#include<math.h>
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		long long n;
		scanf("%lld",&n);
		if((n%10)%2==0){
			int chan=0,le=0;
			while(n>0){
				if((n%10)%2==0) chan++;
				else le++;
				n/=10;
			}
			if(chan>le) printf("YES\n");
			else printf("NO\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
