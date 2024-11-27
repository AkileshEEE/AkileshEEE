
//C program to calculate compound interest
#include<stdio.h>
//for using pow function we must
//include math.h
#include<math.h>
//driver code
int maon()
{
 //principal amount
 double principal=1000;
 //Anuval rate of interest
 double rate=5;
 //Time
 double time=2;
 //calculating compond interest
 double Amount=principal*
        ((pow((1+rate/100),time)));
 double CI=Amount-principal;
 
 printf("compond interest is:%if",CI);
 return 0;

}


