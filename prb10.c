#include<stdio.h>
int main(){
int  a,b,c,d=0; //declaring variables 
scanf("%d",&a); //getting input from user
b=sizeof(a)*8;  //getting bit od a user input
for(b=b-1;b>0;b--){  //using for loops from bit to 0
 c=(1<<b)&a;     //shifting 1 from bit number and using AND operator
 if(c==0){
    d++;                 //increment
    }else{
    break;
    }
    }printf("%d",d);  //printing leading zeros
    }