#include <stdio.h>
#include <string.h>


int main(){
	char c[200];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	int i;int dem=0;
	for(i=0;i<strlen(c);i++){
		if(c[i]!=' '){
			if(i==0||c[i-1]==' '){
				dem++;
			}
		}
	}
	printf("%d",dem);
	
	return 0;
}
