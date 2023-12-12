//Program to illustrate runtime and compile time declaration of a 2-d array 
#include<stdio.h>
int main(){
    //run time
    int a[2][2],i,j;
    printf("enter elements in array 'A'\n");
    for(i=0;i<=1;i++){
        for(j=0;j<=1;j++){
         scanf("%d",&a[i][j]);
        }
    }
    printf("array 'A' elements:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
         printf("%d\t",a[i][j]);
        }
       printf("\n"); 
    }
    //compile time
    int b[2][2]={1,2,3,4};
     printf("array 'B' elements:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
         printf("%d\t",b[i][j]);
        }
       printf("\n"); 
    } 
    return 0;
}