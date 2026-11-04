#include <stdio.h>
long long ucln(long long a,long long b){
	while(b!=0){
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long bcnn(long long a,long long b){
	return a/(ucln(a,b))*b;
}

typedef struct{
	long long tu;
	long long mau;
}phanso;
//cach tranh con tro
phanso rutgon(phanso ps){
	long long u=ucln(ps.tu,ps.mau);
	ps.tu/=u;
	ps.mau/=u;
	return ps;
}



phanso tong(phanso a,phanso b){
	phanso kq;
	kq.tu=a.tu*b.mau+b.tu*a.mau;
	kq.mau=a.mau*b.mau;
	return rutgon(kq);
}
phanso thuong(phanso a,phanso b){
	phanso kq;
	kq.tu=a.tu*b.mau;
	kq.mau=a.mau*b.tu;
	return rutgon(kq);
}

int main(){
	int t;int i=1;
	scanf("%d",&t);
	
	while(t--){
		phanso p,q;
	scanf("%lld %lld %lld %lld",&p.tu,&p.mau,&q.tu,&q.mau);
	
	p=rutgon(p);
	q=rutgon(q);
	long long mc=bcnn(p.mau,q.mau);
	long long tup=p.tu*(mc/p.mau);
	long long tuq=q.tu*(mc/q.mau);
	phanso sum=tong(p,q);
	phanso div=thuong(p,q);
	printf("Case #%d:\n",i++);
	printf("%lld/%lld %lld/%lld\n",tup,mc,tuq,mc);
	printf("%lld/%lld\n",sum.tu,sum.mau);
	printf("%lld/%lld\n",div.tu,div.mau);
	}
	
	
	return 0;
}
