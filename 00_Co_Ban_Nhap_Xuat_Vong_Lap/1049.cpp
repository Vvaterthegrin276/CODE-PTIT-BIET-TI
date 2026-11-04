#include <stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t>0){
	int n;
	scanf("%d",&n);
	int chan=0, le=0;
	while (n>0){
		int chuso=n%10;
		if(chuso%2==0){
			chan++;
		}
		else{
			le++;
		}
		n=n/10;
	}	
	t--;
	printf("%d %d\n",le,chan);
	}
	return 0;
}
