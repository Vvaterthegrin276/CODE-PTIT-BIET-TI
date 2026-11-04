#include <stdio.h>
#define MAX 100
void nhapmang(int n,int a[MAX]){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void xuly(int n,int a[MAX],int tc){
	int dd[100005]={0};
	int i;
	for(i=0;i<n;i++){
		dd[a[i]]++; 
	}
	printf("Test %d:\n",tc);
	for(i=0;i<n;i++){
		if(dd[a[i]]>=1){
			printf("%d xuat hien %d lan\n",a[i],dd[a[i]]);
			dd[a[i]]=0;
		}
	}
}
int main(){
	int t,tc=1;scanf("%d",&t);
	int n,a[MAX];
	while(t--){
		scanf("%d",&n);
		nhapmang(n,a);
		xuly(n,a,tc++);
	}
	return 0;
}
