#include<stdio.h>
void main()
{
    int number;
   
   //input from the user
   printf("Enter an integer:");
   scanf("%d",&number);
   //check whether the number is odd or even
   if(number% 2==0)
   {
       printf("%d is even.\n",number);
   }
   else
   {
       printf("%d is odd.\n",number);
   
}
}
    



