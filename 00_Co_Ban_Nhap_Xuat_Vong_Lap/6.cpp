#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (y==0){
    printf("0");
    return 0;}
    else{
    printf("%d %d %d %.2f %d",x+y,x-y,x*y,(double)x/y,x%y);
    }
    return 0;
}
