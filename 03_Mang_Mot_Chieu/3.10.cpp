#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void demso(int n, int a[MAX]){
	int i,j,dem,d,in;
	d=0;
	for(i=0;i<n;i++){
		dem=0;
		for(j=0;j<n;j++){
			if (a[j] == a[i]){
                dem++;
            }
		}
		in=0;
		for (j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                in = 1;
                break;
            }
        }
        
        if (dem > 1 && in == 0) {
            if (d > 0) printf(" ");
            printf("%d", a[i]);
            d++;
        }
	}
	if (d == 0) printf("0");
    printf("\n");
}
int main(){
	int n;
    int a[MAX];
    scanf("%d", &n);
    nhapmang(n, a);
    demso(n, a);
	return 0;
}

