#include <stdio.h>
#include "hello.h" //防止找不到hello函数声明
int main(int argc,char **argv)
{
	if(argc >= 2 && argv[1] != NULL)
	{
		char *name = argv[1];
		hello(name);
	}
	else
	{
		hello(NULL); //注意参数检查
	}
	return 0;
}
