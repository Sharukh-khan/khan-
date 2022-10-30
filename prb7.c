#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d",&a);//getting integer from user 
    scanf("%d",&b); //getting bit position from user
     for(b=b;b<=31;b++){   // for loop with condition from 0 to 31 
         c=(1<<b)&a;       // shfting 1 integer with according to bit positon number and using AND operator
         if(c!=0){    // if c is not equal to zero
             d=c;     // assining d as highest bit number
         }
}printf("the highest bit : %d",d);
}
        
