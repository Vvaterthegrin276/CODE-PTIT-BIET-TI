#include <stdio.h>
#define MAX 100
int nto(long long n){
	long long i;
	if(n<2) return 0;
	if(n==2) return 1;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int main(){
	int n;scanf("%d",&n);
	int a[MAX];
	int i;
	nhapmang(n,a);
	int dem=0;
	for(i=0;i<n;i++){
		if(nto(a[i])) dem++;
	}
	printf("%d ",dem);
	for(int i=0;i<n;i++){
		if(nto(a[i])) printf("%d ",a[i]);
	}
	
	return 0;
}
