#include <stdio.h>
int nto(int n){
	if(n<2) return 0;
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;	
	}
	return 1;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;
	scanf("%d",&n);
	int i,a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(nto(a[i])) printf("%d ",a[i]);
	}
	printf("\n");
	}
	
	
	return 0;
}
