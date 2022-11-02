#include<stdio.h>
int main(){
    int a,b;                                                                                                                                 //step1
    scanf("%d",&a); //getting integer from user                                                                                              //step2
    scanf("%d",&b); //getting bit position from user                                                                                         //step3
    a=(~(1<<b))&a;  //shifting 1 number with shift operator as with bit position numberand using complement and OR operator                  //step4
    printf("the output is :%d",a);
}

 /*algoritham
step1:  declaring a variable  A and B
   
step2: getting input from user (for eg 1 : 10  )  (10: 0000 1010 ) 

step3: getting a bit position from user for nth 
                          as eg  1;
                          
step4: getting with b input as " 1 " 
         for 1  a bit is : 0000 0001
             and shifting it as left rotation  with b (1<<b) (0000 0001 << 1) and ans will be (0000 0010)
                        we are using NOT operator ~ ans will be (1111 1101 )
             and we are using AND operator with a variable 
             with eg1  : 10          (1111 1101) & (0000 1010 ) 
                                                          1111 1101
                                                          0000 1010
                                                         =0000 1000  (accoring to truth table)
                                                       value is 8
step5: prints */