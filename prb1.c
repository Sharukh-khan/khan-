 #include<stdio.h>

int main()
{
       int a,b ;
          scanf("%d",&a); //getting a integer from user
             
             scanf("%d",&b); //getting a bit position for least significant (0)
                
                a=(1<<b)&a;  //shifting 1 integer with shiftoperator as with bitposition number and  using AND operator 
                   
                   if(a!=0){     // IF  a  is not equal to 0 
                              printf("the least bit is set");
                                 }else{
                                            printf("the least bit is not set");
                                               }
                       return 0;
}
