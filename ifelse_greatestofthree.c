//program to find greatest of three numbers using ifelse(nested)
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
   if(a>b){
       if (a>c){
        printf("a= %d is greatest",a);
    }
       else printf("c= %d is greatest",c);
   }
   else{
       if(b>c){
      printf("b= %d is greatest",b);
   }
       else printf("c= %d is greatest",c);
   }
    return 0;
}