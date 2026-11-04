#include <stdio.h>


int main()
{
	int a[100];
	int i,n;scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=0;i<n;i++){
	
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("%d\n",max);
	for(i=0;i<n;i++){
		if(a[i]==max){
			printf("%d ",i);
		}
	}
	
	return 0;
}
