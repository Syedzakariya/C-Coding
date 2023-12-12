
#include<stdio.h>
//i found symbols in c
int main(){
    char i;int j=0;
    for(i=0;i<=126;i++){
        while(j<=i){            
        printf("%d = \%c\n",j,i);
        j++;
        }
    }
    printf("\111 \3 \127 \111 \117");
    return 0;
}