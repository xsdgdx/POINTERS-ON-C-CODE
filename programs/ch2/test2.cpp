#include<stdio.h>
int a()
{
int value = 1;
return value;
}
int b(int (*a)())
{
return a();
}
void main()
{
int i = b(a);
printf("%d",i);
}