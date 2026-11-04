#include <stdio.h>
#include <string.h>
long long ucln(long long a,long long b){
	while(b!=0){
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}
/*struct Phanso{
	long long tu;
	long long mau;
};
int main(){
	struct Phanso ps;
	scanf("%lld %lld",&ps.tu,&ps.mau);
	long long u=ucln(ps.tu,ps.mau);
	ps.tu=ps.tu/u;
	ps.mau=ps.mau/u;
	printf("%lld/%lld",ps.tu,ps.mau);
}*/
typedef struct{
	long long tu;
	long long mau;	
}phanso; 
int main(){
	phanso ps;
	scanf("%lld %lld",&ps.tu,&ps.mau);
	long long u=ucln(ps.tu,ps.mau);
	ps.tu/=u;
	ps.mau/=u;
	printf("%lld/%lld",ps.tu,ps.mau);
	
	
	return 0;
}

