#include<stdio.h>
int main(){
int a,b,c,d,zeros=0,one=0; //declaring variables
scanf("%d",&a);  //getting input from user
b=sizeof(a)*8;   //getting bits of a number
for(c=0;c<b-1;c++){  //running loop from 0 to b
d=(1<<c)&a;  //shifting 1 as with shift operator and using AND opertor
if(d==0){  //if d is zero
zeros++;
}else{  //if d is other than zero
one++;
}
}printf("zeros: %d and ones: %d",zeros,one);
return 0;
}

/* 
   algoritham 
   
 step1: declare variables a,b,c,d,zeros ,one
 
 step2: getting inpu from user 
 
 step 3: getting bit of a by size of a with multiply 8
 
 step 4:  using for loops by assigining c=0 from 0 to (size  of bit -1) 
              inside for loop 
                        and shifting it as left rotation  with c (1<<c) and using AND operator
                                                         as per c=0 and as increments a 1 number rotates 
                                                         
                                                                 
                                                when c=0  0000 0001
                                                          0000 1010
                                                    ans   0000 0000 
                                                          value is 0   ,
                                                          
                                                         
                                                when c=1  0000 0010
                                                          0000 1010
                                                    ans   0000 0010 
                                                          value is above 0  ,          
                                                          
step 5:  when value is 0 zeros variable increments    and when value is above 0 one increments 

step 6: prints ones and zeros

*/