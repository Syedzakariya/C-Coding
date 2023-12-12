//program to illustrate different ways to scan variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three no.s: \n");
    scanf("%d %d %d",&a, &b, &c);
    printf("%d\n",a+b+c);

    int num1,num2,num3;
    printf("enter number1\n");
    scanf("%d",&num1);
    printf("enter number2\n");
    scanf("%d",&num2);
    num3=num1+num2;
    printf("addition of two numbers = %d",num3);

return 0;
}  