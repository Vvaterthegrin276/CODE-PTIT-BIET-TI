#include <stdio.h>

int main(){
	int a[100];
	int n;scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int chan[100],le[100];
	int dauchan=0,daule=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			chan[dauchan++]=a[i];
			
		}
		else{
			le[daule++]=a[i];
		}
	}
	for(i=0;i<dauchan;i++){
		for(j=1+i;j<dauchan;j++){
			if (chan[i]>chan[j]){
				int tam=chan[i];
				chan[i]=chan[j];
				chan[j]=tam;
			}
		}
		
	}
	for(i=0;i<daule;i++){
		for(j=1+i;j<daule;j++){
			if (le[i]>le[j]){
				int tam=le[i];
				le[i]=le[j];
				le[j]=tam;
			}
		}
		
	}
	for(i=0;i<dauchan;i++){
		printf("%d ",chan[i]);
		
	}
	for(i=0;i<daule;i++){
		printf("%d ",le[i]);
		
	}

	
	
	return 0;
}
