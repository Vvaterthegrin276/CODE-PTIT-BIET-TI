#include <stdio.h>
#define MAX 1000
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
	int i,j;
	for(i=0;i<n;i++){
		b[a[i]]++;
	}
	for(i=0;i<n;i++){
		if(b[a[i]]>1){
			c[s]=a[i];
			s++;
			b[a[i]]=1;
		}
	}
	printf("%d\n",s);
	for(i=0;i<s;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
}


int main(){
	int n;int a[MAX];
	scanf("%d",&n);
	nhapmang(n,a);
	xuly(n,a);
	return 0;
}
