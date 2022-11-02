#include<stdio.h>
int main(){
int a, b ,c,d ;
scanf("%d",&a); //getting integer from user 
b=sizeof(a)*8;
for(d=0;d<=b-1;d++){ // for loop with condition from 0 to 31 
  c=(1<<d)&a;    // shfting 1 integer with according to bit positon number and using AND operator
       if(c!=0){                         // if c is not equal to zero
      printf("the lowest bit :%d",c);   //lowest bit
  break;
  }
  }
  }
  
         /*   algoritham
step1:  declaring a variable  a,b,c,d
   
step2: getting input from user (for eg 1 : 10  )  (10: 0000 1010 ) 

step3: getting bits of (a)  by   size of(a) =4 * 8 = 32 bits  
                          
step4:  using for loops by assigining d=0 from 0 to (size  of bit -1) 
              inside for loop 
                        and shifting it as left rotation  with d (1<<d) and using AND operator
                                                         as per d=0 and as increments a 1 number rotates 
                                                         
                                                when d=1  0000 0010
                                                          0000 1010
                                                    ans   0000 0010 
                                                          value is 2   ,
                                                          
step5;  value is printed  and it breaks from     for loop

          */