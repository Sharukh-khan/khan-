#include<stdio.h>
int main(){
     printf("\t The trailing  zeros\n");   
  int a,b,c,d=0,e;                                                                            //step1
  
 printf("enter the number :");
 scanf("%d",&a);  //getting integer from user                                                   //step2
 
 
  b=sizeof(a)*8;   // getting bits of a                                                            //step3
  
  for(e=0;e<b-1;e++){        // for loop with condition from e =0 to  up to b                     //step4
  
   c=(1<<e)&a;         // shfting 1 integer with according to e and using AND operator
  
   if( c==0){                // if c is  equal to zero                                            //step5
     d++;
     continue;
     }else{
         break;
     }
     
      }
     printf("the trailing zeros are : %d",d);   //trailing  zero                                  //step6
     }
     
     
     /*   algoritham
step1:  declaring a variable  a,b,c,d=0,e
   
step2: getting input from user (for eg 1 : 10  )  (10: 0000 1010 ) 

step3: getting bits of (a)  by   size of(a) =4 * 8 = 32 bits  
                          
step4:  using for loops by assigining e=0 from 0 to (size  of bit -1) 
              inside for loop 
                        and shifting it as left rotation  with e (1<<e) and using AND operator
                                                         as per e=0 and as increments a 1 number rotates 
                                                         
                                                when e=0  0000 0001
                                                          0000 1010
                                                    ans   0000 0000 
                                                          value is 0   ,
                                                          
step5;  if value is  0  then d will increments  ,  when value is above 0 it gets break 

step6; prints trailing zeros            */
