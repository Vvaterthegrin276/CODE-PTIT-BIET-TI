#include <stdio.h>
#include <string.h>


int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		char a[20];
	/*gets(a); scanf("%s", a);*/ fgets(a,sizeof(a),stdin);a[strcspn(a,"\n")]=0;
	
	int n=strlen(a);
	int i;long long s=0;
	for(i=0;i<n;i++){
		if(a[i]=='0'||a[i]=='8'||a[i]=='9'){
			s=s*10;
		}
		else if(a[i]=='1'){
			s=s*10+1; 
		}
		else{
			s=-2;
			break;
		}
	}
	if(s>0){
		printf("%lld\n",s);
		
	}else printf("INVALID\n");
		
	}
	
	return 0;
}
