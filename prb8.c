#include<stdio.h>
int main(){
int a, b ,c,d ;
scanf("%d",&a); //getting integer from user 
b=sizeof(a)*8; // getting bits of number a
for(d=0;d<=b-1;d++){ // for loop with condition from 0 to 31 
  c=(1<<d)&a;    // shfting 1 integer with according to d and using AND operator
       if(c!=0){                         // if c is not equal to zero
      printf("the lowest bit :%d",c);   //lowest bit
  break;
  }
  }
  }
