#include <stdio.h>
#include <string.h>

int main(){
	char c[100];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	
	char *p=strtok(c," ");
	char gap[200][100];
	int dem=0;
	
	char kq[1000]="";
	while(p!=NULL){
		int found=0;
		int i;
		for(i=0;i<dem;i++){
			if(strcmp(gap[i],p)==0){
				found=1;
				break;
			}
		}
		if(found==0){
			strcpy(gap[dem],p);
			dem++;
			if(strlen(kq)>0) strcat(kq," ");
			strcat(kq,p);
		}
		p=strtok(NULL," ");
	}
	printf("%s\n",kq);
	
	return 0;
}

