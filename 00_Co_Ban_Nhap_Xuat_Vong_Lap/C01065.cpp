#include <stdio.h>
int nto(long long n){
	long long i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
	
}

int  main(){
	long long n;
	scanf("%lld",&n);
	int dem2=0,dem3=0,dem5=0,dem7=0;
	long long tam=n;
	while(tam>0){
		int du=tam%10;
		if (du == 2) dem2++;
        else if (du == 3) dem3++;
        else if (du == 5) dem5++;
        else if (du == 7) dem7++;
        tam/= 10;
	}
	long long sotam1=n;
	int len=0;
	tam=n;
	while(tam>0){
		len++;
		tam=tam/10;
	}
	int i;
	for(i=len-1;i>=0;i--){
		long long p=1;
		int j;
		for(j=0;j<i;j++){
			p=p*10;
		}
		int duu=(n/p)%10;
		if (duu == 2 && dem2 > 0) {
            printf("2 %d\n", dem2);
            dem2 = 0;
        } else if (duu == 3 && dem3 > 0) {
            printf("3 %d\n", dem3);
            dem3 = 0;
        } else if (duu == 5 && dem5 > 0) {
            printf("5 %d\n", dem5);
            dem5 = 0;
        } else if (duu == 7 && dem7 > 0) {
            printf("7 %d\n", dem7);
            dem7 = 0;
        }
	}
	
	return 0;
}
