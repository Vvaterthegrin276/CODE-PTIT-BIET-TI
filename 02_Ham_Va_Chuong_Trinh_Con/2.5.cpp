#include <stdio.h>
int ucln(int a,int b){
	if(b>a){
		int temp=b;
		b=a;
		a=temp;
	}
	while(b!=0){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
void check(int a,int b){
	if(ucln(a,b)==1){
		printf("(%d,%d)\n",a,b);
	}
}
int main(){
	int a,b;scanf("%d %d",&a,&b);
	int i,j;
	for(i=a;i<=b;i++){
		for(j=i+1;j<=b;j++){
			check(i,j);
			
		}
		
	}
	
	return 0;
}
