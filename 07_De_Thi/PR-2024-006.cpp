#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[20],b[20],d[40];
	int i,j;char c;
	int m,n;scanf("%d %d %c",&m,&n,&c);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	int len=0;
	
	if(c=='T'){
		for(i=0;i<m;i++) d[len++]=a[i]; // khi nay len da len m-1
		for(i=0;i<n;i++) d[len++]=b[i]; //d[]-> d[a[0],a[1],....b[0],...]
		for(i=0;i<len;i++){
			for(j=i+1;j<len;j++){
				if(d[i]>d[j]){//day tang
					int tam=d[i];
					d[i]=d[j];
					d[j]=tam;
				}
			}
		}
	}
	else if(c=='G'){
		for(i=0;i<m;i++) d[len++]=a[i];
		for(i=0;i<n;i++) d[len++]=b[i];
		for(i=0;i<len;i++){
			for(j=i+1;j<len;j++){
				if(d[i]<d[j]){
					int tam=d[i];
					d[i]=d[j];
					d[j]=tam;
				}
			}
		}
	}
	else if(c=='F'){
		for(i=0;i<m;i++) d[len++]=a[i];
		for(i=0;i<n;i++) d[len++]=b[i];
	}
	else if(c=='A'){
		for(i=0;i<n;i++) d[len++]=b[i];
		for(i=0;i<m;i++) d[len++]=a[i];
	}
	for(i=0;i<len;i++){
		printf("%d ",d[i]);
	}
	printf("\n");
	}
	
	
	return 0;
}
