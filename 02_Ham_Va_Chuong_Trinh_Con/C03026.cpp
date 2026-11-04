#include <stdio.h>
int tn(long long n){
	long long i;
	long long tam;
	long long sotam=n;
	long long sodao=0;
	while(n>0){
 		tam=n%10;
		sodao=sodao*10+tam;
		n=n/10; 	   
	}
	if(sodao==sotam) return 1;
	return 0;
}
int main(){
	long long a,b;scanf("%lld %lld",&a,&b);
	if((tn(a)&&!tn(b))||(!tn(a)&&tn(b))) printf("YES\n");
	else printf("NO\n");

	return 0;
}
