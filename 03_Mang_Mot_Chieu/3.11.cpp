#include <stdio.h>

int main(){
	int a[100];
    int i,j, n;
    int ok=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(i=0;i<n;i++){
    	int dem=0;
    	for(j=0;j<n;j++){
    		if(a[j]==a[i]){
    			dem++;
			}
		}
		for(j=0;j<i;j++){
			if(a[j]==a[i]){
				ok=1;break;
			}
		}
		if(dem==1){
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
