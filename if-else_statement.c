//program to find weather a number is odd or even
#include<stdio.h>
int main(){
    int x;
    printf("enter a number\n");
    scanf("%d",&x);

    if(x%2==0){
        printf("%d is an even number\n",x);
    }
    else{
        printf("%d is an odd number\n",x);
    }
    printf("thank you\n");
    
//program to find greatest of two numbers
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("a=%d is greatest",a);
    }
    else{
        printf("b=%d is greatest",b);
    }
    return 0;
}  