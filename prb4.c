#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a); //getting integer from user 
    scanf("%d",&b); //getting bit position from user
    a=(1<<b)|a;  //shifting 1 number with shift operator as with bit position number and OR operator 
    printf("the output is : %d",a); // output ater set  
    return 0;
}
