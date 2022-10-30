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
        
