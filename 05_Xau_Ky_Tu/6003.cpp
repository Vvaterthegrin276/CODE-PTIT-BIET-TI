#include <stdio.h>
#include <string.h>
/*#define MAX 201 //vi \0
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char s[MAX];
		fgets(s,MAX,stdin);
		s[strcspn(s,"\n")]=0;
		int dem=0;
		int trongtu=0;
		int i;
		for(i=0;i<strlen(s);i++){
			if(s[i]!=' '){
				if(trongtu==0){
					dem++;
					trongtu=1;
				}
			}else{
				trongtu=0;
			}
		}
		printf("%d\n",dem);
	}
}*/
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char s1[200];
	fgets(s1,sizeof(s1),stdin);
	s1[strcspn(s1,"\n")]='\0';
	int dem=0;
	char *p=strtok(s1," ");
	while(p!=NULL)
	{
		p=strtok(NULL," ");
		dem++;
	}
	printf("%d\n", dem);
	}
	
	return 0;
}
