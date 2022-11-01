#include<stdio.h>
int main(){
int a, b ,c ,d; //declaring variables
scanf("%d %d",&a,&b); //scanning input from user
c=a<<b; //left rotating
d=a>>b  //right rotating
printf("left rotation %d \n , right rotation %d ", c,d);
}