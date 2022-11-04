#include<stdio.h>
int main(){
    printf("\t Nth bit is set or not\n");
    int a,b;                                                                                                          //step1
    
    printf("enter the integer :");
    scanf("%d",&a);  //getting integer  from user                                                                     //step2
   
     printf("enter the nth bit position :");
    scanf("%d",&b);  //getting bit posistion from user                                                                //step3
    
    
    a=(1<<b)&a;      //shifting 1 number wth shiftoperator as with getting  bit position number                       //step4
    
    
    if(a!=0){       // if a is not equal to zero                                                                      //step5
        printf("the nth bit is set");
        }else{                                                                                                        //step6
            printf("the nth bit is not set");
        }
    
    return 0;                                                                                                         //step7
}

         /*algoritham
step1:  declaring a variable  A and B
   
step2: getting input from user (for eg 1 : 10  , eg 2 :14 )  (10: 0000 1010 ) (14: 0000 1110)

step3: getting a bit position from user for nth 
                          as eg  2;
                          
step4: getting with b input as " 2 " 
         for 1  a bit is : 0000 0001
             and shifting it as left rotation  with b (1<<b) (0000 0001 << 2) and ans will be (0000 0100)
             
             and we are using AND operator with a variable 
             with eg1  : 10          (0000 0100) & (0000 1010 ) 
                                                          0000 0100
                                                          0000 1010
                                                         =0000 0000  (accoring to truth table)
                                                       value is 0
                
                with eg2:    14        (0000 0100) & (0000 1110 )  
                                                         0000 0100
                                                         0000 1110
                                                        =0000 0100 (according to truth table)
                                                         value is above 0
             
             
step5 step6:    using if conditon if value is 0 (most bit is zero)
                              if value is above 0 (most bit is set)

step7:return */
