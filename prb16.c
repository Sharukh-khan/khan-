#include<stdio.h>
int main(){
int a,b;
scanf("%d",&a);
b=(a&1);
if(b==0){
printf("the number is even ");
}else{
printf("the number is odd");
}
}