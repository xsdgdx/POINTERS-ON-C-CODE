#include<stdio.h> 

#define MAX 1000
int main()
{
    int length=0;
    char string[MAX],max_string[MAX];
    while(gets(string) != EOF){
    int len = strlen(string);
    if(len > length)
    {
        strcpy(max_string,string);
    }
    }
    if(length > 0)
    {
        printf("the longest string is \n %s",max_string);
    }
    return 0;
}