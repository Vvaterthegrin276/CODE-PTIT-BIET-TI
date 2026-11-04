#include <stdio.h>
#include <string.h>
typedef struct{
	int ma;
	char ten[50];
	char ngay[20];
	float a,b,c;
	float tongdiem;
	
}thisinh;

int main(){
	int n;scanf("%d",&n);
	getchar();
	thisinh ds[100];
	int i;float tong=-1.0;
	for(i=0;i<n;i++){
		ds[i].ma=i+1;
		fgets(ds[i].ten,sizeof(ds[i].ten),stdin);
		ds[i].ten[strcspn(ds[i].ten,"\n")]='\0';
		fgets(ds[i].ngay,sizeof(ds[i].ngay),stdin);
		ds[i].ngay[strcspn(ds[i].ngay,"\n")]='\0';
		scanf("%f", &ds[i].a);
 		scanf("%f", &ds[i].b);
    	scanf("%f", &ds[i].c);
    	getchar();
    	ds[i].tongdiem=ds[i].a+ds[i].b+ds[i].c;
    	if(ds[i].tongdiem>tong){
    		tong=ds[i].tongdiem;
		}
	}
	for(i=0;i<n;i++){
		if(ds[i].tongdiem==tong){
			printf("%d %s %s %.1f\n",ds[i].ma,ds[i].ten,ds[i].ngay,ds[i].tongdiem);
		}
	}
	
	return 0;
}
