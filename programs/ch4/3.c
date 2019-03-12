#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("Please input three number\n");
    scanf("%d %d %d",&a,&b,&c);
    if( (a*b + b*c == b*b + a*c))
    {
        printf("this is a Isosceles triangle");
    }
    else if(a*a + b*b + c*c == 2*a*b + 2*b*c)
    {
        printf("this is a Equilateral triangle");
    }
    else if( a + b < c)
    {
        printf("this is not a triangle");
    }
    else {printf("this only is a triangle");}

    return 0;
}