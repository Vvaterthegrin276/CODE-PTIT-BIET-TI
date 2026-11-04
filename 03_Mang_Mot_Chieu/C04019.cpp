#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;
	scanf("%d",&n);
	int a[100];int d[10000]={};
	int i;int dem=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		d[a[i]]++;
		if(d[a[i]]>dem){
			dem=d[a[i]];
	}
}
	for(i=0;i<n;i++){
		if(d[a[i]]==dem){
			d[a[i]]=0;
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	}
	
	
 
	
	return 0;
}

