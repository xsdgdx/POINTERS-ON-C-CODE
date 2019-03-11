#include<stdio.h>
#include<math.h>

float my_sqrt(int);

int main()
{
    float i,j;
    scanf("%f",&i);
    j = sqrt(i);
    printf("%f",j);
    return 0;
}

float my_sqrt(int n)
{
    float a = 1;
    while(abs(n - a) > 0.1)
    {
        a = (a + (a / n))/2;
    }
    return a;
}