//Program to find factorial of a number using while-loop
#include<stdio.h>
int main(){
    int num, fact=1,i=1;
    printf("enter number\n");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i=i+1;
    }
    printf("factorial of %d = %d",num,fact);
    return 0;
}