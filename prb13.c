#include<stdio.h>
int main(){
int a, b ,c ,d; //declaring variables                                       //step1
scanf("%d %d",&a,&b); //scanning input from user                            //step2
c=a<<b; //left rotating                                                     //step3
d=a>>b;  //right rotating
printf("left rotation %d \n , right rotation %d ", c,d);                    //step4
}

/* algoritham

step1: declaring variables

step2: getting input from user (a) abd getting input for rotation (b)

step3: << it s a left shift operator moves  a a bit according our input and changes the posiion 
                  eg:a = 10  b=2
                  
                           left 0000 1010 <<2 = 0010 1000 moves a bit leftword  = 40
                          right 0000 1010 >>2 = 0000 0010 moves a bit rightword = 2
                          
                          
step4: prints left rotation and right rotation 

*/