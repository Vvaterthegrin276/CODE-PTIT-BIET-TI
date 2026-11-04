#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	int sum=0;int i;
	for(i=a;i<=b;i++){
		sum=sum+i;
	}
	printf("%d",sum);
	
	return 0;
}
