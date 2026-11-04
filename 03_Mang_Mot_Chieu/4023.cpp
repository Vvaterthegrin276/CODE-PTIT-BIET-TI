#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void xuly(int n,int a[MAX]){
	int i,j,tam;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}	
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}




int  main(){
	int n, a[MAX];
	scanf("%d",&n);
	nhapmang(n,a);
	xuly(n,a);
	
	return 0;
	
}
