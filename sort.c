#include <stdio.h>
#include "functions.h"

int main (int argc, char *argv[])
{

	if (argv[1][0] == 'i')
	{
		insert(*argv[2], argc);
	}
	if (argv[1][0] == 's')
	{
		selection(*argv[2], argc);
	}
	if (argv[1][0] == 'b')
	{
		bubble(*argv[2], argc);
	}
	
      return 0;
}

