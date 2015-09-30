#include <stdio.h>
#include "functions.h"
#include <math.h>


void printarray(int length, int a[])
{
	int i;
	
	for(i=0; i<length; i++)
	
	{
		printf("%d ", a[i]);
	}
	return;
}
	
	
void insert(int length, int a[])
{
	int i, j, temp;
	for(i=0; i<=length; i++)
	{
		for(j=i-1; j>=0; j--)
		{
			if(a[j+1]<a[j])
			{
				temp   = a[j];
				a[j]   = a[j+1];
				a[j+1] = temp;
			}
			else
				break;
		}
	}
	
	return;
}


//void selection(char *a[], int argc)	
//{
//	int a, b, temp;
//	for(a=0; a<argc-2;a++)
//		for(b=a+1;b<=argc-1;b++)
//		 	if (argv[a]>argv[b])
//	{
//		temp     = argv[a];
//		argv[a]  = argv[b];
//		argv[b]  = temp;
//	}
//	for(a=0; a<argc; a++)
//		printf("%s ", *argv[i]);
//	
//	return 0;
//}


//void bubble(int argc, char a[])
//{
//	int a, b, temp;
//	
//	for(b=3; b>=0; b--)
//		for(a=0; a<b; a++)
//			if(argv[a]>argv[a+1])
//	{
//		temp      =  argv[a];
//		argv[a]   =  argv[a+1];
//		argv[a+1] =  temp;
//	}
//	for(a=0);a<argc; a++)
//	printf("%s ", *argv[a]);
//	
//	return 0;
//}