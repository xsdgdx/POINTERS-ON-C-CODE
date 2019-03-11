#include<stdio.h>
#include<stdarg.h>
/* 确实，现在可以传多个参数值进去了，可是，我tm连怎么给函数传递不定参数的不会，你让我怎么玩？难道又归结道数组上去？*/
int max_list(int ,...);
int main()
{
    int max_num;
    return 0;
}

int max_list(int x,...){
    int max = x;
    int temp;
    va_list var_list;
    va_start(var_list,x);
    do{
        temp = va_arg(var_list,int);
        if(temp > max)
            max = temp;
    }while(temp > 0);
    va_end(var_list);
    return max;
}