#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
	int n;scanf("%d",&n);
	int d=0;
	d=d+n/1000;
	n=n-(n/1000)*1000;
	d=d+n/500;
	n=n-(n/500)*500;
	d=d+n/200;
	n=n-(n/200)*200;
	d=d+n/100;
	n=n-(n/100)*100;
	d=d+n/50;
	n=n-(n/50)*50;
	d=d+n/20;
	n=n-(n/20)*20;
	d=d+n/10;
	n=n-(n/10)*10;
	d=d+n/5;
	n=n-(n/5)*5;
	d=d+n/2;
	n=n-(n/2)*2;
	d=d+n/1;
	n=n-(n/1)*1;
	printf("%d\n",d);	
	}
	
	return 0;
}
