#include <stdio.h>
#include <math.h>
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
	int dem=0;
	long long tam=n;
	long long i;
	while(tam>0){
		tam=tam/10;
		dem++;
	}
	long long c1,c2;
	int k=dem/2;
	int power=1;
	if(dem%2==0){
		for(i=0;i<k;i++) power=power*10;
		c1=n/power;
		c2=n%power;
		printf("%lld\n",c1/gcd(c1,c2)*c2);
	}else printf("INVALID\n");
	}
	
	
	return 0;
}
