#include<stdio.h>
int main(){
int a,b;
scanf("%d",&a); //getting input from user
scanf("%d",&b); //getting input from user
a=a^b; //using XOR comman with a and b
b=a^b;  //using XOR comman with a and b
a=a^b;  
printf("a=%d,b=%d",a,b);
}