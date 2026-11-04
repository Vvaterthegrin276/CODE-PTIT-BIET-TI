#include <stdio.h>
#define MAX 100
void nhapmang(int n,int m,int a[MAX][MAX]) {
	int i,j;
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			scanf("%d",&a[i][j]);
		}
	}

}
void xuly(int n,int m,int a[MAX][MAX],int test) {
	int i,j;
	printf("Test %d:\n",test);
	for(i=1; i<n; i++) {
		for(j=1; j<m; j++) {
			printf("%d ",a[i][j]);

		}
		printf("\n");
	}

}


int main() {
	int t;
	scanf("%d",&t);
	int n,m,a[MAX][MAX];
	int test =1;
	while(t--) {
		scanf("%d %d",&n,&m);
		nhapmang(n,m,a);
		xuly(n,m,a,test);
		test++;
	}


	return 0;

}
