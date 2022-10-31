#include <stdio.h>

int main()
{
 int a,b; //declaring variables a,b
  scanf("%d",&a);  //getting input from user
 b=a^(a|(~a));  //(1.inverting a ) (2.then using OR operator ) (3.and Then XOR)
  printf("%d",b); //PRINTING VALUE with negative sign 
}