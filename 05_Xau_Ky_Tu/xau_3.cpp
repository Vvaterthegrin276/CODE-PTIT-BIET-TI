#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char c[500];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	int i;int k=0;int ok=1;
	for(i=0;i<strlen(c);i++){
		if(isupper(c[i])){
			k=i;ok=1;
			break;
		}
		else ok=0;
	}
	if(ok==1) printf("%d",k);
	else printf("-1");
	return 0;
}
