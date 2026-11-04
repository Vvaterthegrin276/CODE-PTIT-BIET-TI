#include <stdio.h>
#include <string.h>
int thuannghich(char c[500]){
	int l=strlen(c);
	int i;
	for(i=0;i<l/2;i++){
		
		if(c[i]!=c[l-i-1]){
			return 0;
		}
	}
	return 1;
}
int chan(char c[500]){
	int l=strlen(c);
	int i;
	for(i=0;i<l;i++){
		int so=c[i]-'0';//phai tru di '0' thi no moi la so
		if(so%2==1) return 0;
	}
	return 1;
	
}
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char c[500];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	if(thuannghich(c)&&chan(c)) printf("YES\n");
	else printf("NO\n");
	
	}
	
	
	
	
	
	
	
	return 0;
}
