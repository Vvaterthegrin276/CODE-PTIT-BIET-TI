#include <stdio.h>
typedef struct{
	long long tu;
	long long mau;
	
}pso;

int ucln(long long a,long long b){
	while(b!=0){
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long bcnn(long long a,long long b){
	long long c=a/ucln(a,b)*b;
	return c;
}
pso rg(pso a){//cung duoc coi la ham
	pso g;
	long long u=ucln(a.tu,a.mau);
	g.tu=a.tu/u;
	g.mau=a.mau/u;
	return g;
}

int main(){
	pso a,b;
	scanf("%lld %lld %lld %lld",&a.tu,&a.mau,&b.tu,&b.mau);
	pso p=rg(a);
	pso q=rg(b);
	long long bc=bcnn(p.mau,q.mau);
	printf("%lld/%lld %lld/%lld\n",p.tu*(bc/p.mau),bc,q.tu*(bc/q.mau),bc);
	printf("%lld/%lld\n",p.tu*(bc/p.mau)+q.tu*(bc/q.mau),bc);
	pso tg;
	tg.tu=p.tu*q.mau;
	tg.mau=p.mau*q.tu;
	pso k=rg(tg);
	printf("%lld/%lld\n",k.tu,k.mau);
	return 0;
	}
