#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		long long n;scanf("%lld",&n);
	long long sotam=n;int dem=0;
	int a[20]={};
	while(sotam>0){
		sotam=sotam/10;
		dem++;
	}
	int count=dem-1;
	long long sotam2=n;
	while(sotam2>0){
		a[count--]=sotam2%10;
		sotam2=sotam2/10;
	}
	int i;int ok=1;
	for(i=0;i<dem-1;i++){
		if(a[i]>a[i+1]){
			ok=0;break;
		}
	}
	if(ok==1) printf("YES\n");
	else printf("NO\n");
	}
	
	return 0;
}
