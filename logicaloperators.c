/*Logical Operators
&& AND
|| OR
! NOT 
*/
#include<stdio.h>
int main(){
/*AND && operator - If any condition is false then the result is false
 If all the conditions are true only then the  result is true*/     
    printf("%d\n",4>3 && 5>4);

    printf("%d\n",4>3 && 5<4 && 10>1);

/*OR || operator - If any one condition is true then the result is true
If all the conditions are false only then the result is false*/
    printf("%d\n",4>3 || 5>4);

    printf("%d\n",4>3 || 5<4 || 10>1);

    printf("%d\n",4<3 || 5<4);

/*NOT ! operator -It reverses the result of operators  */

    printf("%d\n",!(4>3 && 5>4));

    printf("%d\n",!(4>3 || 5<4 || 10<1));

    printf("%d\n",!(4<3));

    return 0;
}