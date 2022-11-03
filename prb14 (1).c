#include<stdio.h>
int main(){
int a,b,c,d;            //step1
scanf("%d",&a);         //step2
b=sizeof(a)*8;          //step3
for(c=b-1;c>=0;c--){    //step4
d=(1<<c)&a;
if(d==0){               //step5
printf("0");
}else{
printf("1");
}

if(c==8 || c==16 ||c==24  ){ //step6
    printf("\t");
}
}
}
  /* algoritham
  
  step1: declaring variables a.b.c.d
  
  step2: getting input from user
  
  step3: getting bit of a ny multiplying (size of a)=4 and (8)=32
  
  step 4: in for loop c as (b-1)=31  and decrements as to equal to zero  
  
                  inside for loop : 1 number in bit moves left rotation according to c  and also AND OPERATOR used with a
                  
                                       for eg 10 :  00000000 00001010 
                                           c= 15 ;  01000000 00000000
                                            d =      00000000 00000000
                                             
                                             value d is  0
                                             
                                        for eg 10  ; 00000000 00001010
                                          c=3      ; 00000000 00001000
                                          =        ; 00000000 00001000
                                          
                                             value d is above 0
                                             
step5 :  if value is 0 prints "0" else "1"  as binary number

step6:  when ever c is equal to 8,16,24 there will be a horizontal tab

*/