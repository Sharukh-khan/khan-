#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);//getting integer from user 
    scanf("%d",&b);//getting bit position from user
    a=(1<<b)^a;    // shifting 1 number with bit position number with XOR operator (( toggle to change 1 to 0 and 0 to 1))
    printf("the output:%d",a);
}

