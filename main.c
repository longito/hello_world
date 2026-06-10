#include <stdio.h>
int main(int argc,char **argv)
{
	if(argc >= 2 && argv[1] != NULL)
	{
		char *name = argv[1];
		printf("hello world, this is  %s\n",name);
	}
	else
		{printf("hello world\n");}
	return 0;
}
