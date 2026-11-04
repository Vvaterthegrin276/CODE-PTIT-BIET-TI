#include <stdio.h>
int nto(int n){
	int i;
	if(n<2){
		return 0;
	}
	for (i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main() {
    int N;
    scanf("%d", &N);
    int count = 0;  
    int i = 2;      
    while (count < N) {
        if (nto(i)) {
            printf("%d\n", i);
            count++;
        }
        i++;
    }
    return 0;
}
