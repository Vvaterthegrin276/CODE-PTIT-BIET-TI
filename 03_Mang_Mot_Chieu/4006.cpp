#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void daonguoc(int n,int a[MAX]){
	int i,dao;
	for(i=0;i<n/2;i++){
		dao=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=dao;
	}
}
void xuatmang(int n,int a[MAX]){
	int i,dem=0;
	for(i=0;i<n;i++){
		if(dem>0){
			printf(" ");
		}
		printf("%d", a[i]);
			dem++;
	}
}
int main(){
	int n;
    int a[MAX];
    scanf("%d", &n);
    nhapmang(n,a);
    daonguoc(n,a);
    xuatmang(n,a);
	return 0;
}
