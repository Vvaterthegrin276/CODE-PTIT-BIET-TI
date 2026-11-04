#include <stdio.h>
#include <math.h>
typedef struct{
	int a,b,c;
}tamgiac;

void nhap(tamgiac *t){
	scanf("%d %d %d",&t->a,&t->b,&t->c);
}
double dientich(tamgiac t){
	double p=(t.a+t.b+t.c)/2;
	double dt=sqrt(p*(p-t.a)*(p-t.b)*(p-t.c));
	return dt;
}
void in(tamgiac t){
	printf("%d %d %d\n",t.a,t.b,t.c);
}
void ghifile(tamgiac *ds,char *tenfile){
	FILE *f=fopen(tenfile,"wb");
	if(f==NULL){
		printf("");return ;
	}
}
