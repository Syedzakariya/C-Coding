//Program to find factorial of a number using for-loop
#include<stdio.h>
int main(){
    int num,fact=1,i; 
    printf("enter number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("factorial is %d",fact);
    return 0;
}