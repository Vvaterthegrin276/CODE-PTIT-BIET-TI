#include <stdio.h>
#include <math.h>

int chinhphuong(int n){
	if(sqrt(n)==round(sqrt(n))) return 1;
	return 0;
}


int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(b>a){
		int i,j;int dem=0;
		for(i=a;i<=b;i++){
			if(chinhphuong(i)){
				dem++;
			}
		}
		printf("%d\n",dem);
		for(j=a;j<=b;j++){
			if(chinhphuong(j)){
				printf("%d\n",j);
			}
		}
	}
	
	
	
	return 0;
}
