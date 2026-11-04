#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void xuly(int n,int a[MAX]){
	int i,max1=a[0],max2=-1;
	
	for(i=0;i<n;i++){
		if(a[i]>max1){
			max1=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i]<max1&&a[i]>max2){
			max2=a[i];
		}
	}
	printf("%d %d",max1,max2);

}
int main(){
	int n,a[MAX];
	scanf("%d",&n);
	nhapmang(n,a);
	xuly(n,a);
	
	
	return 0;
}
