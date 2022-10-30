#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);  //getting integer  from user 
    scanf("%d",&b);  //getting bit posistion from user
    a=(1<<b)&a;      //shifting 1 number wth shiftoperator as with getting  bit position number 
    if(a!=0){       // if a is not equal to zero
        printf("the nth bit is set");
        }else{
            printf("the nth bit is not set");
        }
    return 0;
}

