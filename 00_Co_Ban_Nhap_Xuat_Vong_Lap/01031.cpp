#include <stdio.h>
/*int nto(int n){
	if(n<2) return 0;
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
	
}
int main(){
	int n;scanf("%d",&n);
	int i;
	if(n==1){
		printf("1");
		return 0;
	}
	int first=1;
	for(i=2;i<=n;i++){
		if(nto(i)&&n%i==0){
			while(n%i==0){
				if(first==0) printf("x");
				first=0;
				printf("%d",i);
				n=n/i;
			}
		}
	}
	return 0;
}*/

int main(){
	int n;scanf("%d",&n);
	if(n==1){
		printf("1");
		return 0;
	}
	int first=1;
	int i;
	for(i=2;i<=n;i++){
		while(n%i==0){
			if(first==0) printf("x");
			first =0;
			printf("%d",i);
			n=n/i;
		}
	}
}
