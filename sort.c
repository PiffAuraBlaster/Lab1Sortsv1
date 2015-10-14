#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main (int argc, char *argv[])
{
		//Gets the objects of the array after the first 2 because the first 2 values will be ./sort and the string for insert, selection, etc.//
		int a[argc-2], i;
		for(i=2; i<argc; i++)
		{
			sscanf(argv[i], "%d", &a[i-2]);
		}
		
		//This sorts the array using insertion sort//
		if (argv[1][0] == 'i')
		{
			insert(argc-2, a);
			printarray(argc-2, a);
		}
		
		//This sorts the array using selection sort//
		else if (argv[1][0] == 's')
		{
			selection(argc-2, a);
			printarray(argc-2, a);
		}
		
		//This sorts the array using bubble sort//
		else if (argv[1][0] == 'b')
		{
			bubble(argc-2, a);
			printarray(argc-2, a);
		}
	
		//This sorts the array using merge sort//
		else if (argv[1][0] == 'm')
		{
			mergesort(argc-2, a);
			printarray(argc-2, a);
		}
      return 0;
}

