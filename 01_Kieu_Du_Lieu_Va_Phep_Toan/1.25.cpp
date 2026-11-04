#include <stdio.h>


int main(){
	int n;scanf("%d",&n);
	int tam=n;
	int a[20]={};
	int i;
	int dem=0;
	while(tam>0){
		tam=tam/10;
		dem++;
	}
	int count=dem-1;
	int tam2=n;
	while(tam2>0){
		a[count--]=tam2%10;
		tam2=tam2/10;
	}
	int m=a[0];
	a[0]=a[dem-1];
	a[dem-1]=m;
	int start=0;

    while (start < dem && a[start] == 0) {
        start++;
    }

  
    if (start == dem) {
        printf("0");
    } else {
        for (int i = start; i < dem; i++) {
            printf("%d", a[i]);
        }
    }
    printf("\n");
	
	
	
	return 0;
}
