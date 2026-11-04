#include <stdio.h>
#include <string.h>

int main(){
	char s1[300],s2[300];
	fgets(s1,sizeof(s1),stdin);
	s1[strcspn(s1,"\n")]='\0'; //strcspn là tìm vtri
	scanf("%s",s2);
	char *p=strtok(s1," "); //strtok la tach s1 dua vao dau cach
	char result[300]="";
	while(p!=NULL){
		if(strcmp(p,s2)!=0){ //strcmp so sanh 2 ki tu
			if(strlen(result)>0){
				strcat(result, " "); //la noi xau
			}
			strcat(result, p);
		}
		p=strtok(NULL," ");// tro den cai tiep theo
		
	}
	printf("%s\n",result);
	return 0;
}
