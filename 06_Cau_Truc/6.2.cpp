#include <stdio.h>
#include <math.h>
typedef struct{
	float x;
	float y;
}Diem;

float dodai(Diem A,Diem B){
	float dai=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
	return dai;
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		Diem A,B,C;
	scanf("%f %f %f %f %f %f",&A.x,&A.y,&B.x,&B.y,&C.x,&C.y);
	float AC=dodai(A,C);
	float BC=dodai(B,C);
	float AB=dodai(A,B);
	if(AB+BC>AC&&AC+BC>AB&&AB+AC>BC&&AB>0&&BC>0&&AC>0){
		printf("%.3f\n",AB+BC+AC);
	}
	else printf("INVALID\n");
	}
	
	
}
