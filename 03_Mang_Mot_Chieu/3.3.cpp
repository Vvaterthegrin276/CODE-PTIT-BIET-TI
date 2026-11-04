#include <stdio.h>

/*int main(){
	int a[100];
	int i,n;scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int ok=0;
	for(i=0;i<n;i++){
		int tam=n;
		if(a[i]==a[tam-i-1]){ 
			ok=1;			   
		}
		else ok=0;
	}
	if(ok==1) printf("YES\n");
	else printf("NO\n");
}*/

int main(){
	int t;scanf("%d",&t);
	while(t--){
		int a[100];
	int i,n;scanf("%d",&n);
	int ok=1;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++){
		if(a[i]==a[n-i-1]){
			ok=1;
		}
		else{
			ok=0;break;
		}
	}
	if(ok==1) printf("OK\n");
	else printf("NO\n");
	}
	
}
