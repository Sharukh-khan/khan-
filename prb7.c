#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d",&a);//getting integer from user 
     b= sizeof(a)*8 ;//getting bit of a
     for(e=0;e<b-1;e++){   // for loop with condition from 0 to 31 
         c=(1<<e)&a;       // shfting 1 integer with according to bit positon number and using AND operator
         if(c!=0){    // if c is not equal to zero
             d=c;     // assining d as highest bit number
         }
}printf("the highest bit : %d",d);
}
       /*   algoritham
step1:  declaring a variable  a,b,c,d,e
   
step2: getting input from user (for eg 1 : 10  )  (10: 0000 1010 ) 

step3: getting bits of (a)  by   size of(a) =4 * 8 = 32 bits  
                          
step4:  using for loops by assigining e=0 from 0 to (size  of bit -1) 
              inside for loop 
                        and shifting it as left rotation  with e (1<<e) and using AND operator
                                                         as per e=0 and as increments a 1 number rotates 
                                                         
                                                when e=1  0000 0010
                                                          0000 1010
                                                    ans   0000 0010 
                                                          value is 2   ,
                                                          
step5;  if value is above 0  then it will stores in d variable 

step6; prints highest bit            */

                                                           
