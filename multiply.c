//write a program to find area of a square 
#include<stdio.h>
int main(){
    int a;
    printf("side of square is \n");
    scanf("%d",&a);
    int area=a*a;
    printf("area of square is %d\n",area); 
/*we have three ways of writing this code, 
1.  int area=a*a;
    printf("area of square is %d",area);
2.  int area;
    printf("area of square is %d",area=a*a);
3.  printf("area of square is %d",a*a);        
    */
    
    //write a program to find area of a circle
    float r,area2;
    printf("enter radious\n");
    scanf("%f",&r);
     area2=3.14*r*r;
    printf("area of circle is %f",area2);
    return 0;
}