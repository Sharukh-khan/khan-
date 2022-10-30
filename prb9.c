#include<stdio.h>
int main(){
  int a,b,c,d=0,e;
  scanf("%d",&a);  //getting integer from user
  b=sizeof(a)*8;   // getting bits of a 
  for(e=0;e<b-1;e++){        // for loop with condition from e =0 to  up to b
   c=(1<<e)&a;         // shfting 1 integer with according to e and using AND operator
   if( c==0){                // if c is  equal to zero
     d++;
     continue;
     }else{
         break;
     }
     }
     printf("the trailing zeros are : %d",d);   //trailing  zero
     }
