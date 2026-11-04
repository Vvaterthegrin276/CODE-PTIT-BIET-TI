#include <stdio.h>
int ucln(int x,int y){
	while(y!=0){
		int r=x%y;
		x=y;
		y=r;
	}
	return x;
}


int main(){
	int m,n;scanf("%d %d",&m,&n);
	int i,j;
	for(i=m;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(ucln(i,j)==1){
				printf("(%d,%d)\n",i,j);
			}
		}
	}
	
	
	
	return 0;
}
