#include <stdio.h>
#include "functions.h"

int main (int argc, char *argv[])
{
	
		int a[argc-2], i;
		for(i=2; i<argc; i++)
		{
			sscanf(argv[i], "%d", &a[i-2]);
		}
		
		printarray(argc-2, a);

		if (argv[1][0] == 'i')
		{
			puts("insert");
		}
		else if (argv[1][0] == 's')
		{
			puts("selection");
		}
		else if (argv[1][0] == 'b')
		{
			puts("bubble");
		}
	
      return 0;
}

