#include <stdio.h>


int kiemtragiam(long n){
	int sau=n%10;
	n=n/10;
	while(n>0){
		int truoc=n%10;
		if(truoc<=sau) return 0;
		sau=truoc;
		n=n/10;
		
	}
	return 1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long a,b;
		scanf("%ld %ld",&a,&b);
		int dem=0;
		long i;
		for(i=a;i<=b;i++){
			if(kiemtragiam(i)==1)
			dem++;
		}
		printf("%d\n",dem);
		
		
	}
	
	
	return 0;
}
