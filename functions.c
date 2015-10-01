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
		for(j=i-1; j>=0; j--)
			if(a[j+1]<a[j])
			{
				temp   = a[j];
				a[j]   = a[j+1];
				a[j+1] = temp;
			}
	return;
}


void selection(int length, int a[])	
{
	int i, j, temp;
	
	for(i=0; i<=length-2; i++)
		for(j=+1; j<=length-1; j++)
			if(a[i] > a[j])
			{ 
				temp = a[i];
		      	a[i] = a[j];
			  	a[j] = temp;
			}
	return;			
}


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