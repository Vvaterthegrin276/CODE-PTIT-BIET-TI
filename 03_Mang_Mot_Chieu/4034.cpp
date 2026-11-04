#include <stdio.h>
#define MAX 1000
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void xuly(int n,int a[MAX]){
	int i,j;
	int c[MAX];
	int s=0;
	int tam;
	for(i=0;i<n;i++){
		int dau=1;
		for(j=i+1;j<n;j++){
			if(a[i]<=a[j]){
				dau=0;
				break;
			}
		}
		if(dau==1){
			c[s]=a[i];
			s++;
		}
	}
	for(i=0;i<s-1;i++){
		for(j=i+1;j<s;j++){
			if(c[i]<c[j]){
				tam=c[i];
				c[i]=c[j];
				c[j]=tam;
			}
		}
	}
	for(i=0;i<s;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
}
int main(){
	int n;int a[MAX];
	int t;scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	nhapmang(n,a);
	xuly(n,a);	
	}
	
	return 0;
}
