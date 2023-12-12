//1.Write a program to check if a number is divisible by 2 or not.
#include<stdio.h>
#include<math.h>
int main(){
     int x;
     printf("enter a number\n");
     scanf("%d",&x);
     printf("%d\n",x%2 == 0);
//2.WAP to check if a number x is such that x>9 and x<100     
    int y;
    printf("enter number: ");
    scanf("%d",&y);
    printf("%d",y>9 && y<100);
    return 0;
}