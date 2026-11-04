#include <stdio.h>

int nto(long long n){
	long long i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long n; scanf("%lld",&n);
        printf("%lld = ",n);
        if(n==1) printf("1\n");
        else {
            int dau=1;
            long long i;
            for(i=2; i*i<=n; i++){
                int dem=0;
                while(n%i==0){
                    n/=i;
                    dem++;
                }
                if(dem>0){
                    if(!dau) printf(" * ");
                    else dau=0;
                    printf("%lld^%d",i,dem);
                }
            }
            if(n>1){
                if(!dau) printf(" * ");
                printf("%lld^1",n);
            }
            printf("\n");
        }
    }
    return 0;
}
