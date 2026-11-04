#include <stdio.h>


int main(){
	int t;scanf("%d",&t);
	int N=t-1;
	int diem[100005]={0};
	while(N--){
		int a,b;scanf("%d %d",&a,&b);
		diem[a]++;
		diem[b]++;
	}
	int i;
	
	for(i=1;i<=t;i++){
		if(diem[i]==t-1){
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");		 
	return 0;
}
