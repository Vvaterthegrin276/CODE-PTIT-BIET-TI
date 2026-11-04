#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i,j;
	int a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int c[100];int p=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				a[i]=c[p++];
			}
		}
	}
	
	return 0;
}
