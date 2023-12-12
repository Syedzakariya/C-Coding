//program for sum of two numbers
#include<stdio.h>
int main(){
 int a,b;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    int sum=a+b;
    printf("sum is %d\n",sum);   
/* instead of assigning value to 'sum'(line 9) we can just assing it 
value in printf function (line 18)*/
    int c,d;
    printf("enter c\n");
    scanf("%d",&c);
    printf("enter d\n");
    scanf("%d",&d);
    printf("sum is %d",sum=c+d);
    return 0;
}