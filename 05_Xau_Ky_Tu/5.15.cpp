#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
			char c[1000];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	int dem1=0,dem2=0;
	int xtc=1;int xtl=1;
	int ok=1;
	int l=strlen(c);
	int i;
	for(i=0;i<l;i++){
		if(isdigit(c[i])){
			int so=c[i]-'0';
			if(so%2==0) dem1++;
			else if(so%2==1) dem2++;
		}
	}
	if(dem1+dem2!=l) printf("INVALID\n");
	else{
		if(dem1>dem2&&l%2==0){
			printf("YES\n");
		}
		else if(dem1<dem2&&l%2==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}	
	}
	}

	
	
	
	return 0;
}
