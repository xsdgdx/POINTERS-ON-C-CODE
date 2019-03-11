#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<100;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(j==i)printf("%d ",i);
            if(i%j==0)break;
        }
    }
    return 0;
}