#include<stdio.h>
#include<math.h>
int main ()
{
    int x1,y1,x2,y2.x3,y3;
    double ab,bc,ac;
    
    printf("\nxy coordinates of vertex A :");
    scanf("%d %d",&x1,&y1);
    printf("\nxy coordinates of vertex B :");
    scanf("%d %d",&x2,&y2);
    printf("\nxy coordinates of vertex C :");
    scanf("%d %d",&x3,&y3);
    
    ab=sqrt(((x2-x1)^2)+((y2-y1)^2));
    bc=sqrt(((x3-x2)^2)+((y3-y2)^2));
    ac=sqrt(((x3-x1)^2)+((y3-y1)^2));
    
    printf("Length AB : %2.lf\n",ab);
    printf("Length BC : %2.lf\n",bc);
    printf("Length AC : %2.lf\n",ac);
    return 0;
}
