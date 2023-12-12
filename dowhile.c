//program to find sum of first n natural numbers
#include<stdio.h>
int main(){
    int limit,sum,i=1;
    printf("enter limit\n");
    scanf("%d",&limit);
    do{
        sum=sum+i;
        i++;
    }
    while(i<=limit);
    printf("sum =%d",sum);
    return 0;
}