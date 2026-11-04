#include <stdio.h>
int main(){
	float F,C;
	scanf("%f",&C);
	F=C*((float)9/5)+32;
	if(C>100){
		return 1;
	
	}else{
		printf("%.2f",F);
	}
	return 0;
}

