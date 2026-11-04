#include <stdio.h>
int tn(long long n){
	long long sotam=n;
	long long sodao=0;
	long long tam;
	while(sotam>0){
		tam=sotam%10;
		sodao=sodao*10+tam;
		sotam=sotam/10;

	}
	if(sodao==n) return 1;
	return 0;
}

int sosau(long long n){
	long long sotam=n;
	long long tam;
	while(sotam>0){
		tam=sotam%10;
		sotam=sotam/10;
		if(tam==6){
			return 1;
		}
	}
	return 0;
}

int socuoi(long long n){
	long long sotam=n;
	long long tam;
	long long sum=0;
	while(sotam>0){
		tam=sotam%10;
		sum=sum+tam;
		sotam=sotam/10;
		
	}
	long long cuoi;
	if(sum%10==8) return 1;
	return 0;
}

int main(){
	long long a,b,i;
	scanf("%lld %lld",&a,&b);
	long long max,min;
	if(a>b){
		max=a;
		min=b;
	}
	else if(a<b){
		max=b;
		min=a;
	}
	int count=0;
	for(i=min;i<=max;i++){
		if(tn(i)&&sosau(i)&&socuoi(i)){
			count++;
			printf("%d ",i);
		}
		
	}
	//printf("%d ",count);
	
	
	return 0;
}
