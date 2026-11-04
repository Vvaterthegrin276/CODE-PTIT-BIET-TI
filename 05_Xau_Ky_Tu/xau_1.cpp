#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char c[500];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	int i;int demhoa=0,demthuong=0;
	for(i=0;i<strlen(c);i++){
		if(isupper(c[i])) demhoa++;
		if(islower(c[i])) demthuong++;
	}
	printf("HOA: %d Thuong: %d",demhoa,demthuong);
	return 0;
}
