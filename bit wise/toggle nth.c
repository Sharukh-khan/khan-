#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);//getting integer from user 
    scanf("%d",&b);//getting bit position from user
    a=(1<<b)^a;    // shifting 1 number with bit position number with XOR operator (( toggle to change 1 to 0 and 0 to 1))
    printf("the output:%d",a);
}

/*algoritham
step1:  declaring a variable  A and B
   
step2: getting input from user (for eg 1 : 10  )  (10: 0000 1010 ) 

step3: getting a bit position from user for nth 
                          as eg  0;
                          
step4: getting with b input as " 0 " 
         for 1  a bit is : 0000 0001
             and shifting it as left rotation  with b (1<<b) (0000 0001 << 2) and ans will be (0000 0001)
             
             and we are using XOR operator with a variable 
             with eg1  : 10          (0000 0001) ^ (0000 1010 ) 
                                                          0000 0001
                                                          0000 1010
                                                         =0000 1011  (accoring to truth table)
                                                       value is 11
step5: prints */