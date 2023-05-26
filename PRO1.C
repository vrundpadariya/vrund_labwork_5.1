#include<stdio.h>
#include<conio.h>

void main (){
int a;

clrscr();
printf("Enter the value of A:");
scanf("%d",&a);



 if(a<0){
 printf("The value is negative.");
 }else if(a=0){
 printf("The value is neutral.");
 }else{
 printf("The value is positive.");
 }


getch();
}