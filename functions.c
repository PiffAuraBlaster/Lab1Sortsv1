#include "functions.h"
#include <math.h>

void insert(char *argv[2], int argc)
{
	int a, b, temp;
	
	{
		for(b=a-1;b>=0;b--)
		{
			if(argv[b+1]<agrv[b])
			{
			temp       = argv[b];
			agrv[b]    = agrv[b+1];
			agrv[b+1]  = temp;
			}
			else
			break;
		}
		printf("%d ",argv[i]);
	}
	return 0;
}


void selection(char *argv[], int argc);	
{
	int a, b, temp;
	for(a=0; a<=argc-2;a++)
		for(b=a+1;b<=argc-1;b++)
		 	if (argv[a]>argv[b])
	{
		temp     = argv[a];
		argv[a]  = argv[b];
		argv[b]  = temp;
	}
	for(a=0; a<argc; a++)
		printf("%d ",argv[i]);
	
	return 0;
}


void bubble(int argc, char *argv[]);
{
	int a, b, temp;
	
	for(b=3; b>=0; b--)
		for(a=0; a<=b; a++)
			if(argv[a]>argv[a+1])
	{
		temp      =  argv[a];
		argv[a]   =  argv[a+1];
		argv[a+1] =  temp;
	}
	for(a=0);a<argc; a++)
	printf("%d " argv[a]);
	
	return 0;
}