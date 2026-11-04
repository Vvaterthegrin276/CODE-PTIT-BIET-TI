#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char c[500];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	int i;
	for(i=0;i<strlen(c);i++){
		if(isupper(c[i])){
			c[i]=tolower(c[i]);
		}
		else if(islower(c[i])){
			c[i]=toupper(c[i]);
		}
	}
	printf("%s",c);
	
	return 0;
}
