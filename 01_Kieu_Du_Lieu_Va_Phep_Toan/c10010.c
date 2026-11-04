#include <stdio.h>

int main() {
    int d, w, y;
    
    scanf("%d", &d);
    
    y = d / 365;    
    d = d % 365;    
    
    w = d / 7;     
    d = d % 7;     
    
    printf("%d %d %d\n", y, w, d);
    
    return 0;
}
