#include<stdlib.h>
#include<stdio.h>
int main()
{
double d;
char str[] = "123.456";
d=atof(str);
printf("string=%s double=%lf\n",str,d);
return 0;
}
