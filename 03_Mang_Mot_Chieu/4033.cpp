#include <stdio.h>
#define MAX 100
#define MAXVAL 10001
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		
}
void xuly(int n,int a[MAX]){
	int b[MAXVAL]={0};
	int c[MAX];
	int s=0;
	int i;
	for(i=0;i<n;i++){
		b[a[i]]++;
		if(b[a[i]]==1){
			c[s]=a[i];
			s++;
		}
			
	}
	for(i=0;i<s;i++){
		printf("%d ",c[i]);
		
	}
	
}
int main(){
	int n;int a[MAX];
	scanf("%d",&n);
	nhapmang(n,a);
	xuly(n,a);
	return 0;
}
