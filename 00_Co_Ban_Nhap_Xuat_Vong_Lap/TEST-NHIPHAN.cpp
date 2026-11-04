#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	if(n==0) {
		printf("0"); 
		return 0;
	}
	int a[10];
	int dem=0;
	while(n>0){
		a[dem]=n%2; //luu du
		dem++;
		n=n/2;
		
	}
	int i;
	for(i=dem-1;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
}
