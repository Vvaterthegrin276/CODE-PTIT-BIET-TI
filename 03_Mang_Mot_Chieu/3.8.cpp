#include <stdio.h>

int main() {
    int a[100];
    int i, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int min1=a[0], min2=a[1];
    if (min1>min2){
    	int temp=min1;
    	min1=min2;
    	min2=temp;
	}
	for(i=2;i<n;i++){
		if(a[i]<min1){
			min2=min1;
			min1=a[i];
		}
		else if(a[i]<min2 && a[i]!=min1){
			min2=a[i];
		}
	}

    printf("%d %d", min1, min2);
    return 0;
}
