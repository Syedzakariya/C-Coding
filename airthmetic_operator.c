/*Operators
a.Airthmetic Operators
b.Relational Operators
c.Logical Operators
d.Bitwise Operators
e.Assignment Operators
f.Ternary Operators
*/
// Instructions
#include<stdio.h>
#include<math.h>
int main(){
//1. Type declare variable- declare variable before using it 

    int a=22;
    int b=a;
    int c=b+1;
    int d=2,e;
 
    int oldage=55;
    int years=5;
    int newage=oldage+years;
    printf("newage is %d\n",newage);

    int x,y,z;
    x=y=z=1;

//2.Airthmetic instructions
//modular operator '%' used to get remainder ,modular operator only works on integers
   int m=17,n=3,o=10;
   int add=m+n+o;
   int sub=m-n-o;
   int multiply=m*n*o;
   int quotient=o/n;
   int power=pow(m,n);
   int remainder=m%n;

printf( "add is %d\n",add);
printf("sub  is %d\n",sub);
printf("mult is %d\n",multiply);
printf( "qnt is %d\n",quotient);
printf( "pwr is %d\n",power);
printf( "rmd is %d\n",remainder);
/*Airthmatic instructions 
Type Conversion
int   op  int     int
int   op  float   float
float op  float   float*/
printf("%d\n",2*2);
printf("%f\n",0.2*0.2);
printf("%d\n",3/2);
printf("%f\n",3/2.0);

int q=(int)9.99999999;
printf("%d\n",q);
/*Airthmetic instructions 
Operator precedence
()     (first prefrence)
*,/,%  (second)
+,-    (third))
=      (fourth)
*/
printf("Operator Precedence\n");
    printf("%d\n",2+5*2);
    printf("%d\n",5*(2+1));
printf("For same precedence (/,*,%) go from left to right\n");
    printf("%d\n",5*2/2);
    printf("%d\n",4*3/6*2);
    
return 0;
}