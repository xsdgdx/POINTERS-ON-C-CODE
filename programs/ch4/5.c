#include <stdio.h>
#include <string.h>
//这程序运行不起来 我tm真是操了 把错误打印出来把：error: ISO C++ forbids comparsion between pointer and integer   你禁止尼玛呢，我写c关你c++啥事
int main(void)
{
    int flag = 0;
    char previous[128];
    char next[128];

    gets(previous);
    while(gets(next) != EOF){
        if(strcmp(next,previous) != 0 && flag == 1){
            printf("%s",next);
            flag = 0;
        }

        if(strcmp(next,previous) == 0)
            flag = 1;
        else
            flag = 0;
        strcpy(previous,next);
    }
}