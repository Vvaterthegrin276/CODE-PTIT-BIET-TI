#include <stdio.h>
#include <string.h>

typedef struct{
	int ma;
	char ten[40];
	char nhom[40];
	float a,b;
	float hieu;
}dovat;

int main(){
	int n;scanf("%d",&n);
	getchar();
	dovat ds[100];
	int i,j;float hieu=-1.0;
	
	for(i=0;i<n;i++){
		ds[i].ma=i+1;
		fgets(ds[i].ten,sizeof(ds[i].ten),stdin);
		ds[i].ten[strcspn(ds[i].ten,"\n")]='\0';
		fgets(ds[i].nhom,sizeof(ds[i].nhom),stdin);
		ds[i].nhom[strcspn(ds[i].nhom,"\n")]='\0';
		scanf("%f",&ds[i].a);
		scanf("%f",&ds[i].b);
		getchar();
		ds[i].hieu=ds[i].b-ds[i].a;
		
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(ds[i].hieu<ds[j].hieu){
				dovat temp=ds[i];
				ds[i]=ds[j];
				ds[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d %s %s %.2f\n",ds[i].ma,ds[i].ten,ds[i].nhom,ds[i].hieu);
	}
	return 0;
}
