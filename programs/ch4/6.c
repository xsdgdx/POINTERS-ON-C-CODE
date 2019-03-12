#include<stdio.h>

int substr(char dst[],char src[],int start,int len);

int main()
{
    char src[3] = {'a','b','c',};
    char dst[2];
    substr(dst,src,0,2);
    char *p = dst;
    while(*p != 0){
        /* code */
        printf("%c",*p++);
    }
    
    return 0;
}

int substr(char dst[],char src[],int start,int len)
{
    src = src + start;
    if(start>=0 && len>=0){
        while(len != 0)
        {
            if(*src == 0)
            {
                *dst++ = 0;
            }
            else
            {
                *dst++=*src++;
            }
            len--; 
        }
    }
    else {
        return -1;
    }
    return 0;
}