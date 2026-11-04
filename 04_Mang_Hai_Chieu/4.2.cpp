#include <stdio.h>

int main(){
	int t;scanf("%d",&t);
	int dem=1;
	while(t--){
		
		int i,j;int a[100][100];
	int n,m;scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Test %d:\n",dem++);
	for(i=1;i<n;i++){
		for(j=1;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("%\n");
	}
	}
	
	
	
	
	return 0;
}
