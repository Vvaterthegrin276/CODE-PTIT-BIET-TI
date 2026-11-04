#include <stdio.h>
int nto(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
	
}

int tn(int n){
	int sotam=n;
	int sum=0;
	while(sotam>0){
		sum=sum*10+sotam%10;
		sotam=sotam/10;
	}
	if(sum==n) return 1;
	return 0;
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a,b,i;
	scanf("%d %d",&a,&b);
	int dem=0;
	for(i=a;i<=b;i++){
		if(tn(i)&&nto(i)){
			printf("%d ", i);
			dem++;
			if(dem%10==0){
				printf("\n");
			}
			else{
				printf("");
			}
		}
		
	}
	printf("\n");
	}
	
	
	return 0;
}
