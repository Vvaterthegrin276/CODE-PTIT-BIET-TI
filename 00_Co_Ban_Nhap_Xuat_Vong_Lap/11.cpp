#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	while(a%2==0){
		printf("CHAN");
		break;
	}
	while(a%2!=0){
		printf("LE");
		break;
	}
	return 0;
}

