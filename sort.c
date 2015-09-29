#include <stdio.h>
#include "functions.h"

int main (int argc, char *argv[])
{
	
		int a[argc-2], i;
		for(i=2; i<argc; i++)
		{
			sscanf(argv[i], "%d", &a[i-2]);
		}
		
		
		//for(a=0; )
			
		
	

//		if (argv[1][0] == 'i')
//	{
//		insert(*argv[2], argc);
//	}
//	else if (argv[1][0] == 's')
//	{
//		selection(*argv[2], argc);
//	}
//	else if (argv[1][0] == 'b')
//	{
//		bubble(*argv[2], argc);
//	}
	
      return 0;
}

