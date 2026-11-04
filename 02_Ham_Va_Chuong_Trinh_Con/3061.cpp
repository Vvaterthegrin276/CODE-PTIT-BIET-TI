#include <stdio.h>
#include <string.h>
int main(){
	int t;scanf("%d",&t);
	while(t--){
		char s[20];
		scanf("%s",s);
		int len=strlen(s);
		int dau = s[0]-'0';
		int cuoi =s[len-1]-'0';
		if(dau==2*cuoi || cuoi==2*dau){
			int ok=1;
			int i,j;
			for(i=1,j=len-2;i<j;i++,j--){
				if(s[i]!=s[j]){
					ok=0;
					break;
				}
			}
			if(ok) printf("YES\n");
			else printf("no\n");	
		}else{
			printf("NO\n");
		}
	}
	
	
}
