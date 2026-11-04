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
	int n;scanf("%d",&n);
	int count =0;
	int i;
	
	while(count<n){
		if(nto(i)){
			count++;
			printf("%d\n",i);
		}
		i++;
	}
	
	
	return 0;
}
