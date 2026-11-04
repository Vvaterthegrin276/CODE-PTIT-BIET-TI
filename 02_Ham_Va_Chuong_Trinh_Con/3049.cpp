#include <stdio.h>


int main(){
	int t;scanf("%d",&t);
	while(t--){
		long n;scanf("%ld",&n);
		if((n%10)%2!=0){
			int chan=0,le=0;
			while(n>0){
				if((n%10)%2==0) chan++;
			else le++;n=n/10;
			}
		if(le>chan) printf("YES\n");
		else printf("NO\n");
		}else{
			printf("NO\n");
		}
	
}
	return 0;
}
