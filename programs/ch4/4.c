#include<stdio.h>

void copy_n(char dst[],char src[],int n);

int main()
{
    char src[3] = {'a','b','c',};
    char dst[2];
    copy_n(dst,src,3);
    char *p = dst;
    while(*p != 0){
        /* code */
        printf("%c",*p++);
    }
    
    return 0;
}

void copy_n(char dst[],char src[],int n)
{
    while(n != 0)
    {
        if(*src == 0)
        {
            *dst++ = 0;
        }
        else
        {
            *dst++=*src++;
        }
        n--; 
    }
}