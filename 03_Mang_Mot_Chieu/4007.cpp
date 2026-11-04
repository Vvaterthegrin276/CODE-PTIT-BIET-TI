#include <stdio.h>
#define MAX 200
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void chenmang(int p,int m,int n,int b[MAX],int a[MAX]){
	int c[MAX];
	int i, j=0;
	for(i=0;i<p;i++){
		c[j++]=a[i];
	}
	for(i=0;i<m;i++){
		c[j++]=b[i];
	}
	for(i=p;i<n;i++){
		c[j++]=a[i];
	}
	for(i=0;i<j;i++){
		if (i > 0){
            printf(" ");
            }
        printf("%d", c[i]);
	}
}
int main(){
	int n, m, p;
    int a[MAX], b[MAX];
    scanf("%d %d", &n, &m);
    nhapmang(n, a);
    nhapmang(m, b);
    scanf("%d", &p);
    chenmang(p,m,n,b,a);
    printf("\n");
	return 0;
}
