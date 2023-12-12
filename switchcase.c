//program illustrating use of switch case (grades of a student)
#include<stdio.h>
int main(){
    float marks1,marks2,marks3;
    int percentage;
    printf("enter marks obtained (0-100) in three subjects: \n");
    scanf("%f %f %f",&marks1,&marks2,&marks3);
    percentage=((marks1+marks2+marks3)/300)*100; 
    printf("Percentage=%d\n",percentage);
    
    switch(percentage/10){
        case 10:
        case 9:
        printf("grade is A");
        break;

        case 8:
        printf("grade is B");
        break;

        case 7:
        printf("grade is C");
        break;

        default:
        printf("grade is D");
        break;
    }
    return 0;
}  