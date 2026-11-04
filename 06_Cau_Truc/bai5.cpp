#include <stdio.h>
#include <string.h>

typedef struct{
	int ma;
	char ten[40];
	float a,b,c,d,e,f,g,h;
	float tong;
	float tb;
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
		
		scanf("%f %f %f %f %f %f %f %f",&ds[i].a,&ds[i].b,&ds[i].c,&ds[i].d,&ds[i].e,&ds[i].f,&ds[i].g,&ds[i].h);

		getchar();
		ds[i].tong=ds[i].a+ds[i].b+ds[i].c+ds[i].d+ds[i].e+ds[i].f+ds[i].g+ds[i].h;
		ds[i].tb=ds[i].tong/8;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(ds[i].tb<ds[j].tb){
				thisinh temp=ds[i];
				ds[i]=ds[j];
				ds[j]=temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {

        printf("HS0%d %s %.1f ", ds[i].ma, ds[i].ten, ds[i].tb);
        if(ds[i].tb>=9) printf("SUAT XAC\n");
        else if(ds[i].tb>=8&&ds[i].tb<=8.9) printf("GIOI\n");
        else if(ds[i].tb>=7&&ds[i].tb<=7.9) printf("KHA\n");
        else if(ds[i].tb>=5&&ds[i].tb<=6.9) printf("TB\n");
        else printf("YEU\n");
    }
	return 0;
}
