#include <stdio.h>
#include <string.h>

int main(){
	int t;scanf("%d",&t);
	while(t--){
		char c[500];
	scanf("%s",c);
	int i;int len=strlen(c);
	int ok=1;
	for(i=0;i<len;i++){
		if((c[i]-'0')%2!=0){
			ok=0;break;
		}
		if((c[i]!=c[len-i-1])){
			ok=0;break;
		}
	}
	 printf(ok ? "YES\n" : "NO\n");
}
	
	return 0;
}
