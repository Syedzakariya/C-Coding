//program to find square root of a number and to illudtrate use of goto
#include<stdio.h>
#include<math.h>
int main(){
    float x,y;read:
    printf("enter number\n");
    scanf("%f",&x);
    if(x<=0) goto read;
    y=sqrt(x);
    printf("x=%f \t y=%f",x,y);
    return 0;
}