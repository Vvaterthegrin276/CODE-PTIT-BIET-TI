#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

void xuly(int n,int a[MAX],int stt){
	int i;
	for(i=stt;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<stt;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n,stt,a[MAX];
	scanf("%d",&n);
	nhapmang(n,a);
	scanf("%d",&stt);
	xuly(n,a,stt);
	
	return 0;
}
