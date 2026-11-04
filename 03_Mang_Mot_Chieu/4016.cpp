#include <stdio.h>
#define MAX 100
int nto(long long n){
	int i;
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
void xuly(int n,int a[MAX],int tc){
	int dd[100005]={0};
	int i;
	for(i=0;i<n;i++){
		dd[a[i]]++;
	}
	printf("Test %d:\n",tc);
	
	for(i=2;i<=10000l;i++){
		if(dd[i]>=1 && nto(i)){
			printf("%d xuat hien %d lan\n",i,dd[i]);
		}
	}
}
int main(){
	int t,tc=1;scanf("%d",&t);
	while(t--){
		int n,a[MAX];
		scanf("%d",&n);
		nhapmang(n,a);
		xuly(n,a,tc++);
		
	}
	
	return 0;
}
