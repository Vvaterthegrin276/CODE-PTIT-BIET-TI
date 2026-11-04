#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float delta;
	float x1,x2;
	delta=b*b-4*a*c;
	if(a==0.0){
		if(b==0.0){
			if(c==0.0){
				printf("NO\n");
			}
			else{
				printf("NO\n");
			}
		}
		else{
		printf("%.2f",x1=(-c)/b);	
		}
	}else{
		if(delta>0){
			x1=(-b+sqrt(delta))/2*a;
			x2=(-b-sqrt(delta))/2*a;
			printf("%.2f %.2f\n",x1,x2);
		}else if(delta==0){
			x1=-b/2*a;
			printf("%.2f",x1);
		}
		else{
			printf("NO\n");
		}	
	}
	
	
	return 0;
}
