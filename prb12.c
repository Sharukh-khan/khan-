#include<stdio.h>
int main(){
int a,b,c,d,zeros=0,one=0; //declaring variables
scanf("%d",&a);  //getting input from user
b=sizeof(a)*8;   //getting bits of a number
for(c=0;c<b-1;c++){  //running loop from 0 to b
d=(1<<c)&a;  //shifting 1 as with shift operator and using AND opertor
if(d==0){  //if d is zero
zeros++;
}else{  //if d is other than zero
one++;
}
}printf("zeros: %d and ones: %d",zeros,one);
return 0;
}