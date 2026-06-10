#include <stdio.h>
#include "hello.h" //防止找不到hello函数声明
int main(int argc,char **argv)
{
	if(argc >= 2 && argv[1] != NULL)
	{
		char *name = argv[1];
		printf("hello world, this is  %s\n",name);
	}
	else
	{
		hello();
	}
	return 0;
}
