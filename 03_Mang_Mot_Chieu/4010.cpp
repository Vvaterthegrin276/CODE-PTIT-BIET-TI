#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void timhainhonhat(int n,int a[MAX]){
	int min1, min2;
	int i;
	if(a[0]<=a[1]){
		min1=a[0];
		min2=a[1];
	}
	else {
 		 min1 = a[1];
         min2 = a[0];
	}
	for (i=2;i<n;i++){
		if(a[i]<min1){
			min2=min1;
			min1=a[i];
		}else if(a[i] > min1 && a[i] < min2){
			min2=a[i];
		}
	}
	printf("%d %d",min1,min2);
}
int main(){
	int n;
	int a[MAX];
	scanf("%d",&n);
	nhapmang(n,a);
	timhainhonhat(n,a);
	return 0;
}
