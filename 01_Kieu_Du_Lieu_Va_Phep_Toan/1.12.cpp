#include <stdio.h>
int ucln(int a,int b){
	int r;
	int max,min;
	if(a>b){
		max=a;
		min=b;
	}else if(a<b){
		max=b;
		min=a;
	}
	while(min>0){
		r=max%min;
		max=min;
		min=r;
	}
	return max;
}
int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a;int b;scanf("%d %d",&a,&b);
	printf("%d\n",ucln(a,b));
		
	}
	
	return 0;
}
