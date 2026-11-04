#include <stdio.h>
int main()
{
	int t;scanf("%d",&t);
	while(t--){
		int n;
	scanf("%d",&n);
	int i,a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0) printf("%d ",a[i]);
	}
	printf("\n");
	}
	
}
