#include <stdio.h>
int main(){
	long n;
	scanf("%ld",&n);
	int i;
	long tong=0;
	long giaithua=1;
	for (i=1;i<=n;i++){
		giaithua=giaithua*i;
		tong=tong+giaithua;
	}
	printf("%ld",tong);
	return 0;
}
