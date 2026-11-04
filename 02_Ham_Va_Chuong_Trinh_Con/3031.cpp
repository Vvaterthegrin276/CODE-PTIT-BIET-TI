#include <stdio.h>
int ucln(long a,long b){
	while(b!=0){
		long r=a%b;
		a=b;
		b=r;
	}
	return a;
}


int main(){
	int t;scanf("%d",&t);
	while(t--){
		long a,b,c,d;scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
		int x=ucln(a,b);
		int y=ucln(c,d);
		if(x==y)printf("YES\n");
		else printf("NO\n");
	
	}
	return 0;
}
