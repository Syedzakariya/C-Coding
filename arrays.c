//Program to illustrate runtime and compile time declaration of a 1-d array 
#include<stdio.h>
int main(){
    //run time 
    int a[5],i;
    printf("enter elements in array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("'a' array elements: ");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

 //compile time
    int b[5]={4,5,6,7,8};
    printf("\n'b' array elements: ");
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    } 

    return 0;
}