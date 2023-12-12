//program to find product of two 3-d matricies
#include<stdio.h>
int main(){
    int a[3][3],b[3][3],m[3][3],i,j,k,
    sum=0;
    printf("enter elements of matrix 'A'\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of matrix 'B'\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         scanf("%d",&b[i][j]);
        }
    } 
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){               
             sum=sum+(a[i][k]*b[k][j]); 
            }
         m[i][j]=sum;
         sum=0;               
        }
    }
    printf("product of two matrix 'A' and 'B' is\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         printf("%d\t",m[i][j]);
        }
     printf("\n");
    }
    return 0;
}