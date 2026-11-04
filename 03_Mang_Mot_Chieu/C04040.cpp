#include <stdio.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;
 	scanf("%d", &n);
 	long long a[100000];
 	for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
	
	long long sum=a[0];
	long long max=a[0];
	long long i;
	for(i=1;i<n;i++){
		if(sum+a[i]>a[i]) sum=sum+a[i];
		else sum=a[i];
		if(sum>max) max=sum;
	}
	printf("%lld\n", max);
	}
	
	
	return 0;
}
