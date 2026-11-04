#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int dem(int n,int a[MAX]){
	int i,d,max1;
	d=1;
	max1=a[0];
	for(i=1;i<n;i++){
		if(a[i]>=max1){
			d++;
		}
		if(a[i] > max1){
			max1=a[i];
		}
	}
	printf("%d\n",d);
	return d;
}
int main(){
	int t;
    scanf("%d", &t);
    while(t>0){
    	int n,a[MAX];
    	scanf("%d",&n);
    	nhapmang(n,a);
    	dem(n,a);
    	t--;
	}
	return 0;
}
