#include <stdio.h>
#include <string.h>
int main(){
	int t;scanf("%d",&t);
	getchar();
	while(t--){
		char c[500],d[500];
	fgets(c,sizeof(c),stdin);
	c[strcspn(c,"\n")]='\0';
	fgets(d,sizeof(d),stdin);
	d[strcspn(d,"\n")]='\0';
	int l1=strlen(c);
	int l2=strlen(d);
	int sum1=0,sum2=0;
	int i;
	for(i=0;i<l1;i++){
		int so=c[i]-'0';
		sum1=sum1*10+so;
	}
	for(i=0;i<l2;i++){
		int so=d[i]-'0';
		sum2=sum2*10+so;
	}
	printf("%d\n",sum1+sum2);
	}
	
	
	return 0;
}
