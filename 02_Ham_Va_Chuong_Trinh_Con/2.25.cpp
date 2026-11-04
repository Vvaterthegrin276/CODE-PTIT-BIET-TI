#include <stdio.h>
void check(int n){
	int sotam=n;int dem=0;int ok=1;
	while(sotam>0){
		sotam=sotam/10;
		dem++;
	}
	int i;int mu=1;
	int tam=n;int sum=0;
	while(tam>0){
		int du=tam%10;
		if(du==0||du==8||du==9){
			du=0;
		}
		else if(du==1){
			du=1;
		}
		else{
			ok=0;
			break;
		}
		tam=tam/10;
		sum=sum+du*mu;
		mu=mu*10;
	}
	if(ok==1&&sum!=0) printf("%d\n",sum);
	else printf("INVALID\n");
	
}

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int n;scanf("%d",&n);
	check(n);
	}
	
	
	
	
	return 0;
}
