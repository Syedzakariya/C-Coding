//Program for arranging the elements of an array in ascending order
#include<stdio.h>
int main(){
    int a[5],i,j,temp;
    printf("enter elements in array\n");
    for(i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }  
    for(i=0;i<=4;i++){
        for(j=i+1;j<=4;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    printf("array elements in ascending order: "); 
    for(i=0;i<=4;i++){
        printf("%d ",a[i]);
    }   
    return 0;
}