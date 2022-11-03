#include<stdio.h>
int main(){
int a,b;                                               //step1
scanf("%d",&a); //getting input from user              //step2
scanf("%d",&b); //getting input from user              
a=a^b; //using XOR comman with a and b               //step3
b=a^b;  //using XOR comman with a and b
a=a^b;
printf("a=%d,b=%d",a,b); //swap                  //step4

}


/* algoritham

step1: declaring variables

step2: getting input from user (a) abd getting input from user (b)  eg a=10  b=4

step3: 1: a= a^b   0000 1010 ^ 0000 0100  = 0000 1110
       2: b= a^b   0000 1110 ^ 0000 0100  = 0000 1010 
       3: a= a^b   0000 1110 ^ 0000 1010  = 0000 0100
       
       a=4 , b=10
                          
                          
step4: prints the swap number

*/