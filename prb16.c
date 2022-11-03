#include<stdio.h>
int main(){
int a,b;                                  //step1
scanf("%d",&a);                           //step2
b=(a&1);                                  //step3
if(b==0){                                  //step4
printf("the number is even ");
}else{
printf("the number is odd");              //step5
}
}

/* algoritham

step1: declaring variables

step2: getting input from user (a) 

step3: a&1 in this eg a=10    and  AND operator used
                  
                            0000 1010
                            0000 0001 (1 bit number)
                    ans     0000 0000  
                          value is 0 
                          
                    eg 2: 11 0000 1011
                             0000 0001
                        ans  0000 0001
                        
                         value is 1
                         
step4:  if value is 1 then its odd number  , value is 0 then its even

step 5: prints


*/