#include <stdio.h>
#include "functions.h"

int main (int argc, char *argv[])
{
	
		int a[argc-2], i;
		for(i=2; i<argc; i++)
		{
			sscanf(argv[i], "%d", &a[i-2]);
		}
		


		if (argv[1][0] == 'i')
		{
			insert(argc-2, a);
			printarray(argc-2, a);
		}
		else if (argv[1][0] == 's')
		{
			selection(argc-2, a);
			printarray(argc-2, a);
		}
		else if (argv[1][0] == 'b')
		{
			bubble(argc-2, a);
			printarray(argc-2, a);
		}
	
		else if (argv[1][0] == 'm')
		{
			merge(argc-2, a);
			printarray(argc-2, a);
		}
      return 0;
}
