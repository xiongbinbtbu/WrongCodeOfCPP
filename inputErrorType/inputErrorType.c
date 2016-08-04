#include <stdio.h>

int main()
{
    char ch;
    while(1)
    {
        int num;
        printf("please input num:");
        int ret=scanf(" %ud",&(num));
        if(ret!=1)
        {
            printf("输入参数有问题！\n");
            //while((ch=getchar())!='\n');//不停的读输入缓冲，直到读完或收到一个回车换行为止，这样就达到清空输入缓冲的目的了
            continue;
        }
        printf("the input number is:%d\n",num);
    }

    return 0;
}
