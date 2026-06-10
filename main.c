#include <stdio.h>
int main(int argc,char **argv)
{
	if(argc >= 2 && argv[1] != NULL)
	{
		char *name = argv[1];
		hello(name);
	}
	else
	{
		hello(NULL);
	}
	return 0;
}
