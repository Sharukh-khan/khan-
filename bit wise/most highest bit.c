 #include<stdio.h>

int main()
{                     
           int  a,b;                                                                                                                //step1
           scanf("%d",&a); //getting a integer from user                                                                            //step2
           scanf("%d",&b); //getting a bit position for most  significant (31)                                                      //step 3
            a=(1<<b)&a;  //shifting 1 integer with shiftoperator as with bitposition number and  using AND operator                 //step4
          if(a!=0){     // IF  a  is not equal to 0                                                                                 //step5
               printf("the most  bit is set");
          }else{                                                                                                                    //step6
              printf("the most bit is notset");
          }
          return 0;}                                                                                                                //step7
  
  
         /*algoritham
step1:  declaring a variable  A and B
   
step2: getting input from user (for eg 1 : 10   and for eg 2: 129)  (10: 0000 1010 ) (129 : 1000 0001)

step3: getting a bit position from user for msb 
                          as "31" , a bit will be " 1000 0000 "
                          
step4: getting with b input as " 31 " 
         for 1  a bit is : 0000 0001
             and shifting it as left rotation  with b (1<<b) (0000 0001 << 31) and ans will be (1000 0000)
             
             and we are using AND operator with a variable 
             with eg1  : 10          (1000 0000) & (0000 1010 ) 
                                                          1000 0000
                                                          0000 1010
                                                         =0000 0000  (accoring to truth table)
                                                       value is 0
                
                with eg2:    129(for 8 bit)          (1000 0000) & (1000 0001 ) : for 8 bit 
                                                         1000 0000
                                                         1000 0001
                                                        =1000 0000 (according to truth table)
                                                         value is above 0
             
             
step5 step6:    using if conditon if value is 0 (most bit is zero)
                              if value is above  (most bit is set)

step7:return */