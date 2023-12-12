//program to find maximum value in a 1-d array
#include<stdio.h>
int main(){
    int a[100],i,size,max;
    printf("enter size of array(<100)\n");
    scanf("%d",&size);
    printf("enter elements in array\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
   max=a[0]; 
    for(i=0;i<size;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    /*we can just do this instead of taking variable 'max' & at last just print a[0]
    if(a[i]>a[0]{
        a[0]=a[i];
    }
    )*/
    printf("Maximum value of array is: %d",max);    
    return 0;
}