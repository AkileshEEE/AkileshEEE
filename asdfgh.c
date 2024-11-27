#include<stdio.h>
void fun1(int a, int b);
void main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    fun1(a,b);
    fun1(a,b);
}
void fun1(int a, int b)
{
    int area;
    area=a*b;
    printf("%d\n",area);
}

