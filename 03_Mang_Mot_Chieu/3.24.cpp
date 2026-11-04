#include <stdio.h>

int sokgiam(int n){
	int tam=n;
	int cuoi=9;
	while(tam>0){
		int du=tam%10;
		if(du>cuoi){
			return 0;
		}
		cuoi=du;
		tam=tam/10;
	}
	return 1;
}

int main(){
	int a[30000],n=0,i,j,x;
	while(scanf("%d",&x)==1){
		if(sokgiam(x)) a[n++]=x;
	}
	if(n==0) return 0;
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	int b[100000], c[100000], m = 0;
    for (int i = 0; i < n; ) {
        int val = a[i];
        int dem = 0;
        while (i < n && a[i] == val) {
            dem++;
            i++;
        }
        b[m] = val;
        c[m] = dem;
        m++;
    }

    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (c[i] < c[j] || (c[i] == c[j] && b[i] > b[j])) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
	
}
