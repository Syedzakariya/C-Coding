/*Conditional operators
2.else if
if (condition1){
    do something if true
}
else if (condition2){
    do something if 1st is false and 2nd is true
}
else if (condition3){
    do something if 1st and 2nd are false and 3rd is true
}
else {
    if all the above are false do this
}
*/
#include<stdio.h>
#include<math.h>
int main(){
    float percentage,marks1,marks2,marks3;
    printf("enter marks obtained (0-100) in three subjects: \n");
    scanf("%f %f %f",&marks1,&marks2,&marks3);
    percentage=((marks1+marks2+marks3)/300)*100; 
    printf("Percentage=%f\n",percentage);

    if (percentage>=90 && percentage<=100){
        printf("Grade:A\n");
    }
    else if (percentage>=80 && percentage<90){
        printf("Grade:B\n");        
    }
    else if (percentage>=70 && percentage<80){
        printf("Grade:C\n");
    }
    else if (percentage>=60 && percentage<70){
        printf("Grade:D\n");
    }
    else if (percentage>=50 && percentage<60){
        printf("Grade:E\n");
    }
    else if (percentage>100 || percentage<0){
        printf("Invalid Input\n");
    }
    else {
        printf("Better Luck Next Time!!");
    }    
      
    return 0;
}