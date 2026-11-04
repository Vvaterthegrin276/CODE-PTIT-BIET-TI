#include <stdio.h>
int nto(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a[100];
    int i,j, n;int ok=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int b[100]={0};
    int bruh=0;
    for(i=0;i<n;i++){
    	if(nto(a[i])){
    		b[bruh++]=a[i];
		}
	}
    for(i=0;i<bruh-1;i++){
		for(j=i+1;j<bruh;j++){
			if(b[i] > b[j]){
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
	for(i=0;i<bruh;i++){
		int dem=0;
		for(j=0;j<bruh;j++){
			if(b[j]==b[i]){
				dem++;
			}
		}
		int in=0;
		for(j=0;j<i;j++){
			if(b[j]==b[i]){
				in=1;break;
			}
		}
		if(in==0){
			printf("%d %d\n",b[i],dem);
		}
	}

	
	
	return 0;
}
