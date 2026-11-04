#include <stdio.h>
#include <string.h>

typedef struct{
	int ma;
	char ten[40];
	char ngay[40];
	float a,b,c;
	float tong;
}thisinh;

int main(){
	int n,i,j;
	scanf("%d",&n);
	getchar();
	thisinh ds[100];
	float tongmax=-1.0;
	for(i=0;i<n;i++){
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
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(ds[i].tong<ds[j].tong){
				thisinh temp=ds[i];
				ds[i]=ds[j];
				ds[j]=temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {

        printf("%d %s %s %.1f\n", ds[i].ma, ds[i].ten, ds[i].ngay, ds[i].tong);
    }
	return 0;
}
