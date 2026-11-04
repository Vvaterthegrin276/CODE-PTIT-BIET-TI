#include <stdio.h>
#define max 100
void nhapmang(int n,int a[max]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",a[i]);
	}
}
int nguyento(int x){
	if(x<2){
		return 0;
	}
	int i;
	for (i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
void innguyento(int n, int a[max]) {
    int i;
    for (i = 0; i < n; i++) {
        if (nguyento(a[i])) {
            if (i > 0)
                printf(" ");
            printf("%d", a[i]);
        }
    }
}
int main(){
	int t;
    scanf("%d", &t);
    while (t > 0) {        
        int n;
        int a[max];
        scanf("%d", &n);
        nhapmang(n, a);
        innguyento(n, a);
        printf("\n");
        t--;
    }
	return 0;
}
