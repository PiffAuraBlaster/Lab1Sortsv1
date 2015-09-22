#include <stdio.h>
#include "functions.c"

int main (int argc, char *argv[])
{

	if (argv[1][0] == 'i')
	{
		puts("insert");	
	}
	if (argv[1][0] == 's')
	{
		puts("selection");
	}
	if (argv[1][0] == 'b')
	{
		puts("bubble");
	}
	//for(i = 1; i < argc; i++){
	//	printf("%s ", argv[i]);
	//}
	
      return 0;
}

