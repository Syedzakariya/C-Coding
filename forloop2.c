//program to print multiplication table of any number
#include<stdio.h>
int main(){
    int num,i;
    printf("enter number\n");
    scanf("%d",&num);
    for(i=1;i<=1000000;i++){
        printf("%dX%d=%d\n",num,i,num*i);
    }
    return 0;
}