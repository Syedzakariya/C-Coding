/*Conditional operators
1. if else
if (condition){
    do something if true
}
else{
    do something if false
}*/
#include<stdio.h>
#include<math.h>
int main(){
    int age;
    printf("enter age\n");
    scanf("%d",&age);

    if(age>=18){
        printf("adult\n");
        printf("they can drive\n");
    }
    else{
        printf("minor");
    }
        return 0;
} 