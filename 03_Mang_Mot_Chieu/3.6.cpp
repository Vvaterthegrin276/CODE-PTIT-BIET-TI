#include <stdio.h>
int main(){
	int n,m;scanf("%d %d",&n,&m);
	int a[100],b[100];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	int k;scanf("%d",&k);
	for(i=0;i<k;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<m;i++){
		printf("%d ",b[i]);
	}
	for(i=k;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
