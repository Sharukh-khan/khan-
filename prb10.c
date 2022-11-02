#include<stdio.h>
int main(){
int  a,b,c,d=0; //declaring variables 
scanf("%d",&a); //getting input from user
b=sizeof(a)*8;  //getting bit od a user input
for(b=b-1;b>=0;b--){  //using for loops from bit to 0
 c=(1<<b)&a;     //shifting 1 from bit number and using AND operator
 if(c==0){
    d++;                 //increment
    }else{
    break;
    }
    }printf("%d",d);  //printing leading zeros
    }
    
      /*   algoritham
step1:  declaring a variable  a,b,c,d=0,e
   
step2: getting input from user (for eg 1 : 10  )  (10: 0000 1010 ) 

step3: getting bits of (a)  by   size of(a) =4 * 8 = 32 bits  
                          
step4:  using for loops by assigining b=b-1 from b-1  to 0
              inside for loop 
                        and shifting it as left rotation  with b (1<<b) and using AND operator
                                                         as per b=0 and as decrement  a 1 number rotates 
                                                         
                                                when e=3  0000 1000  
                                                          0000 1010   for 8 bit  value 10
                                                    ans   0000 1000 
                                                          value is 8   ,
                                                          
step5;  if value is   0  then d will increments  ,  when value is above 0 it gets break 

step6; prints leading  zeros            */
