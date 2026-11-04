#include <stdio.h>
/*int main(){
	int i,k;
	i=5,k=i++; //lay i de gan cho k, roi tang i len 1
	printf("i=%d,k=%d\n",i,k);
	i=5,k=++i; //tang i len 1, roi gan i cho k
	printf("i=%d,k=%d\n",i,k);
	i=5,k=i--; //lay i gan cho k, roi giam i 1
	printf("i=%d,k=%d\n",i,k);
	i=5,k=--i; //giam i 1,roi gan cho k
	printf("i=%d,k=%d\n",i,k);
	return 0;
}*/
int main(){
	int a=5,b=7;
	double c = (double)b/a;
	printf("%d/%d=%f\n",b,a,c);
	printf("%d/%d=%d\n",b,a,b/a);
	return 0;
}
