// WAP to illustrate the use of nested if else
//Find the greatest of 3 numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
   if(a>b && a>c){
     printf("a = %d is greatest\n",a);
       if (b>c){
         printf("b = %d is greater than c\n",b);
         printf("c = %d is smallest\n",c);
       }
       else{
         printf("c = %d is greater than b\n",c);
         printf("b = %d is smallest\n",b);
        } 
    }
   else if(b>a && b>c){
     printf("b = %d is greatest\n",b);
       if (a>c){
         printf("a = %d is greater than c\n",a);
         printf("c = %d is smallest\n",c);
        }
       else{
         printf("c = %d is greater than a\n",c);
         printf("a = %d is smallest\n",a);
        }
    }
   else{
     printf("c = %d is greatest\n",c);
       if (b>a){
         printf("b = %d is greater than a\n",b);
         printf("a = %d is smallest\n",a);
        }
       else{
         printf("a = %d is greater than b\n",a);
         printf("b = %d is smallest\n",b);
        }
    }
return 0;
}  