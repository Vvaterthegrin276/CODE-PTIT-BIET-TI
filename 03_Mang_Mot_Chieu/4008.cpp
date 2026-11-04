#include <stdio.h>
#define MAX 200
void nhapmanga(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void nhapmangb(int m,int b[MAX]){
	int i;
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
}
void chenmang(int p, int m, int n, int b[MAX], int a[MAX]){
	int c[MAX];
	int i,j;
	j=0;
	for(i=0;i<p;i++){
		c[j++]=a[i];
	}
	for(i=0;i<m;i++){
		c[j++]=b[i];
	}
	for(i=p;i<n;i++){
		c[j++]=a[i];
	}
	for (i = 0; i < j; i++){
        if (i > 0){
        	printf(" ");
		}
		printf("%d", c[i]);
	}
}
int main(){
	int t, n, m, p;
	scanf("%d", &t);
	int a[MAX], b[MAX];
	int dem;
	for(dem=1;dem<=t;dem++){
		scanf("%d %d %d", &n, &m, &p);
        nhapmanga(n, a);
        nhapmangb(m, b);
        printf("Test %d:\n", dem);
        chenmang(p, m, n, b, a);
        printf("\n");
	}
	return 0;
}
