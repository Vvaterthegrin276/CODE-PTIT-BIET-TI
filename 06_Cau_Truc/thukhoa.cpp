#include <stdio.h>
#include <string.h>

typedef struct{
	int ma;
	char ten[50];
	char ngay[50];
	float a,b,c;
	float tong;
}thisinh;


int main(){
	int t;thisinh ds[100];
	scanf("%d",&t);int i;
	getchar();float tongmax=-1.0;
	
	
	
	for(i=0;i<t;i++){
		ds[i].ma=i+1;
		fgets(ds[i].ten,sizeof(ds[i].ten),stdin);
		ds[i].ten[strcspn(ds[i].ten,"\n")]='\0';
		fgets(ds[i].ngay,sizeof(ds[i].ngay),stdin);
		ds[i].ngay[strcspn(ds[i].ngay,"\n")]='\0';
		scanf("%f",&ds[i].a);
		scanf("%f",&ds[i].b);
		scanf("%f",&ds[i].c);
		getchar();
		ds[i].tong=ds[i].a+ds[i].b+ds[i].c;
		if(ds[i].tong>tongmax){
			tongmax=ds[i].tong;
		}
	}
	for(i=0;i<t;i++){
		if(ds[i].tong==tongmax){
			printf("%d %s %s %.1f\n",ds[i].ma,ds[i].ten,ds[i].ngay,ds[i].tong);
		}
	}

	
	
	
	return 0;
}
