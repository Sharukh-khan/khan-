#include<stdio.h>
int main(){
    
        printf("\t set nth bit \n");
    int a,b;                                                                                                                                //step1

          printf (" enter the integer :");
    scanf("%d",&a); //getting integer from user                                                                                             //step2
    
         printf(" enter the nth bit to make set :");
    scanf("%d",&b); //getting bit position from user                                                                                        //step3
    
    a=(1<<b)|a;  //shifting 1 number with shift operator as with bit position number and OR operator                                        //step4
    
    
    printf("after setting the output is : %d",a); // output ater set                                                                                      //step5
    return 0;
}

/*algoritham
step1:  declaring a variable  A and B
   
step2: getting input from user (for eg 1 : 10  )  (10: 0000 1010 ) 

step3: getting a bit position from user for nth 
                          as eg  2;
                          
step4: getting with b input as " 2 " 
         for 1  a bit is : 0000 0001
             and shifting it as left rotation  with b (1<<b) (0000 0001 << 2) and ans will be (0000 0100)
             
             and we are using OR operator with a variable 
             with eg1  : 10          (0000 0100) | (0000 1010 ) 
                                                          0000 0100
                                                          0000 1010
                                                         =0000 1110  (accoring to truth table)
                                                       value is 14
step5: prints */