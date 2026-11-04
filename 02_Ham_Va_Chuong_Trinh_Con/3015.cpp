#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while (t--){
		char so[20];
		fgets(so,20,stdin);
		so[strcspn(so,"\n")]='\0';
		int len=strlen(so);
		int ok=1;
		int i;
		for(i=0;i<len/2;i++){
			if(so[i]!=so[len-1-i]){
				ok=0;break;
			}
		}
		if(ok==1){
			printf("YES\n");
		}
		else if(ok==0){
			printf("NO\n");
		}
	}
	return 0;
}
