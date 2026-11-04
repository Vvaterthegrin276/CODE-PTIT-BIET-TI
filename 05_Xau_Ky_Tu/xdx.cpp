#include <stdio.h>
#include <string.h>
int nto(int n){
	int i;
	if(n<2)return 0;
	for(i=2;i*i<=n;i++){
		if(n%i==0)return 0;
	}
	return 1;
}
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
	for(i=0;i<l;i++){
		int so=c[i]-'0';
		if(!nto(so)) return 0;
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
	if(tn(c)&&dc(c)) printf("YES\n");
	else printf("NO\n");
	}
	
	
	
	
	
	
	
	return 0;
}
