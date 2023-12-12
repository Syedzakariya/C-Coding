//program to find product of any two matricies
#include<stdio.h>
int main(){
    int a[100][100],b[100][100],m[100][100],i,j,k,r1,c1,r2,c2,sum=0;

    printf("enter no. of rows of matrix 'A'\n");
    scanf("%d",&r1);
    printf("enter no. of columns of matrix 'A'\n");
    scanf("%d",&c1);

    printf("enter no. of rows of matrix 'B'\n");
    scanf("%d",&r2);
    printf("enter no. of columns of matrix 'B'\n");
    scanf("%d",&c2);
    if(c1!=r2){
     printf("A x B is not defined");
    }
    else{
        printf("enter elements of matrix 'A'\n");
     for(i=0;i<r1;i++){
          for(j=0;j<c1;j++){
             scanf("%d",&a[i][j]);
            }
        }
     printf("enter elements of matrix 'B'\n");    
     for(i=0;i<r2;i++){
         for(j=0;j<c2;j++){
             scanf("%d",&b[i][j]);
            }
        }
     for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            for(k=0;k<c1;k++){               
             sum=sum+(a[i][k]*b[k][j]);
            }
         m[i][j]=sum;
         sum=0;         
        }
    }
    printf("product of two matrix 'A' and 'B' is\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
         printf("%d\t",m[i][j]);
        }
     printf("\n");
    }
 }
    return 0;
}