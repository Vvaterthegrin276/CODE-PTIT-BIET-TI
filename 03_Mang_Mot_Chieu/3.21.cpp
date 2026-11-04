#include <stdio.h>

#include <stdio.h>
int main(){
	int n;scanf("%d",&n);
	int i,j,a[100],b[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(b[i]<b[j]){
				int tam=b[i];
				b[i]=b[j];
				b[j]=tam;
			}
		}
	}
	for(i=0;i<n;i++){
			printf("%d %d ",a[i],b[i]);
	}
	
	
}

