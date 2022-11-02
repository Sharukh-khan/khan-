 #include<stdio.h>

int main()
{
       int a,b ;                                                                       //step1
          scanf("%d",&a); //getting a integer from user                                //step2
                       
             scanf("%d",&b); //getting a bit position for least significant (0)         //step3
                
                a=(1<<b)&a;  //shifting 1 integer with shiftoperator as with bitposition number and  using AND operator               //step4
                   
                   if(a!=0){     // IF  a  is not equal to 0                                                            //step5
                              printf("the least bit is set");                                                            
                                 }else{                                                                                  //step6
                                            printf("the least bit is not set");
                                               }
                       return 0;                                                                      //step7
}
  /*algoritham
   step 1 :declaring a variable  A and B
   
   STEP 2 :getting input from user (for eg 1 : 10   and for eg 2: 21)  (10: 0000 1010) (20: 0001 0101)
   
   STEP 3 :getting a bit position from user for lsb 
                          as "0" , a bit will be " 0000 0001 "
                          
   step4  :getting with b input as " 0 " 
   
               for 1  a bit is : 0000 0001
             and shifting it as left rotation  with b (1<<b) (0000 0001 << 0) and ans will be (0000 0001)
             
             and we are using AND operator with a variable 
                with eg1  : 10          (0000 0001) & (0000 1010 ) 
                                                          0000 0001
                                                          0000 1010
                                                         =0000 0000  (accoring to truth table)
                                                       value is 0
                
                with eg2:    21          (0000 0001) & (0001 0101 )
                                                         0000 0001
                                                         0001 0101
                                                        =0000 0001 (according to truth table)
                                                         value is above 0 
                                                         
    step 5 and step 6 : using if conditon if value is 0 (least bit is zero)
                              if value is above 0 (least bit is set)
                              
      step 7: return 0               */         