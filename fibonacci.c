//program to print fibonacci series -0,1,1,2,3,5,8,13..... 
#include<stdio.h>
int main(){
    int num,a=0,b=1,c,i;
    printf("enter number of terms\n",num);
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}3re2w1qd   `s