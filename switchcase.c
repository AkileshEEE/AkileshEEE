#include<stdio.h>
void main()
{
    int a,b,c;
    char ch;
    
    scanf("%c",&ch);
    scanf("%d %d",&a,&b);
    
    switch(ch)
    {
        case'+':c=a+b;
                break;
        case'-':c=a-b;
                break;
        case'*':c=a*b;
                break;
        case'/':c=a/b;
                break;
        case'%':c=a%b;
                break;
        case'&':c=a&b;
                break;
        default:
                printf("invalid option");
    }
    printf("%d",c);
}


