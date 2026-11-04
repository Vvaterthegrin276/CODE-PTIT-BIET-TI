#include <stdio.h>



int main(){
	int t;scanf("%d",&t);
	while(t--){
		long n;scanf("%ld",&n);
		int ok=1;
		if(n%2!=0){
			ok=0;
		}
		else{
			while(n>0){
				long temp=n;
				int chuso=n%10;
				if(chuso%2!=0){
			 		ok=0;break;
				}
				n/=10;
			}
		}
		if(ok==0)printf("NO\n");
		else printf("YES\n");
	}
	
	
	
	return 0;
}
