#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char c[1000];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	int i;int dem1=0,dem2=0;
	for(i=0;i<strlen(c);i++){
		if(isalpha(c[i])){
			dem1++;
		}
		if(isdigit(c[i])){
			dem2++;
		}
	}
	printf("%d %d %d",dem1,dem2,strlen(c)-dem1-dem2);
	
	
	return 0;
}
