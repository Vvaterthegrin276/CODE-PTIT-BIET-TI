#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
}
void xuly(int n,int a[MAX]){
	int dem=0;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==a[i+1]) dem++;
	}
	printf("%d\n",dem);
}
int main(){
	int n,a[MAX];
	int t; scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		nhapmang(n,a);
		xuly(n,a);
	}
	
	return 0;
}
