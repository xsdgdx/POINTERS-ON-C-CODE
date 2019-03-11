#include<stdio.h> 

void deblank(char string[]);
int main()
{
    char test[100];
    gets(test); 
    printf("%s",test);
    deblank(test);
    printf(test);
    return 0;
}

/*程序仅限于去除空格符，如果是制表符或者换行符或其他可能不行，这可能需要用到指针，就像标准答案中的那样*/

void deblank(char string[])
{
    int i,j;
    int flag = 0;
    for(i = 0; string[i] != '\0'; i++){
        while(string[i] == ' ' && flag == 1){/*while语句会将string[i]后面的字符强制性的，不断的拉回到i+1部分*/
            for(j = i; string[j] != '\0'; j++)
                string[j] = string[j+1];
            string[j] = '\0';
        }

        if(string[i] == ' ')
            flag = 1;
        else
            flag = 0;
    }
}