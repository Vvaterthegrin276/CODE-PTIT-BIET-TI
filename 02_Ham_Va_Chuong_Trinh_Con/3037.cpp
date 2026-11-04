#include <stdio.h>
#include <string.h>
int main(){
	char s[20];
	scanf("%s",&s);
	int len = strlen(s);


	int nto[]={2,3,5,7};
 	int dain[10]={};
 	
 	int i,j;
 	for(i=0;i<len;i++){
 		int chuso=s[i]-'0';
 		int lanto=0;
 		for(j=0;j<4;j++){
 			if(chuso==nto[j]){
 				lanto=1;break;
			 }
		 }
	 	if(lanto==1&&dain[chuso]==0){
	 		dain[chuso]=1;
	 		int dem=0;
	 		for(j=0;j<len;j++){
	 			if(s[j]-'0'==chuso) dem++;
			 }
			 printf("%d %d\n",chuso, dem);
		 }
	}
	
	
	return 0;
}
