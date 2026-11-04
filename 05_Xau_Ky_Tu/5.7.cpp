#include <stdio.h>
#include <string.h>
int tn(char c[500]){
	int l=strlen(c);
	int i;
	for(i=0;i<l/2;i++){
		if(c[i]!=c[l-i-1]) return 0;
	}
	return 1;
}
int dc(char c[500]){
	int l=strlen(c);
	int i;
	int ok=1;
	if(c[0]-'0'==8&&c[l-1]-'0'==8) ok=1;
	else ok=0;
	int sum=0;
	for(i=0;i<l;i++){
		int so=c[i]-'0';
		sum=sum+so;
	}
	if(sum%10==0&&ok==1)return 1;
	return 0;
}

int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char c[500];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	if(tn(c)&&dc(c)) printf("YES\n");
	else printf("NO\n");
	}
	
	
	
	
	
	
	
	return 0;
}
