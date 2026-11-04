#include <stdio.h>

int main(){
	int a[100];
    int i,k, n;int ok=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	scanf("%d",&k);
	for(i=k;i<n;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<k;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
