#include <stdio.h>
#define max 100
void nhapmang(int n,int a[max]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void insochan(int n,int a[max]){
	int i;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while (t>0){
		int n;
		int a[max];
		scanf("%d",&n);
		nhapmang(n,a);
		insochan(n,a);
		printf("\n");
		t--;
	}
	return 0;
}
