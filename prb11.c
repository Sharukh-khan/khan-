#include <stdio.h>

int main()
{
 int a,b; //declaring variables a,b
  scanf("%d",&a);  //getting input from user
 b=a^(a|(~a));  //(1.inverting a ) (2.then using OR operator ) (3.and Then XOR)
  printf("%d",b); //PRINTING VALUE with flip bits  
}

         /*       
         
         algoritham

step 1: declare variables a,b

step 2: getting input from user  eg: 10

step 3: first of all inverting   a= 0000 1010    ans is 1111 0101 
        second     using OR operator with a     0000 1010
                                                1111 0101
                                            ans 1111 1111
         third      XOR with a         
                                        0000 1010
                                        1111 1111 
                                    ans 1111 0101
                                        value is -245   
                                        
                                        while printing number gets one complement and two complement 
                                        
                                        1111 0101
                        ones complement 0000 1010
                        twos complement         1
                        ans             0000 1011
                            value       -11
                    
 step 4:            prints flip bits                           
                                    */