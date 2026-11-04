#include <stdio.h>
#define MAX 1000
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
}
int nto(long long n){
	int i;
	if(n<2) return 0;
	if(n==2) return 1;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}

void xuly(int n,int a[MAX]){
	int i,j,tam;
	for (i = 0; i < n-1; i++) {   
        for(j=i+1;j<n;j++){
        	if(a[i]>a[j]){
        		tam=a[i];
        		a[i]=a[j];
        		a[j]=tam;
			}
		}
        
    }
    for(i=0;i<n;i++){
    	if(nto(a[i])==1){
    		if(i==0||a[i]!=a[i-1]){
    			printf("%d ",a[i]);
			}
		}
	}
	printf("\n");
}

int main(){
	int t;scanf("%d",&t);
	int n;int a[MAX];
	while(t--){
		scanf("%d",&n);
	nhapmang(n,a);
	xuly(n,a);
	}
	return 0;
}

