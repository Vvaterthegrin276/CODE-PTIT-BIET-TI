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
	int i,j;int a[100][100];
	int n;scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(nto(a[i][j])){
				sum+=a[i][j];
			}
		}
	}
	printf("%d",sum);
	return 0;
}
