#include <stdio.h>
#include "functions.h"
#include <math.h>

//A function to print arrays after the functions are run.//
void printarray(int length, int a[])
{
	int i;
	
	for(i=0; i<length; i++)
	
	{
		printf("%d ", a[i]);
	}
	return;
}
	
//Function for insertion sort on an array.//
void insert(int length, int a[])
{
	int i, j, temp;
	
	for(i=0; i<length; i++)
		for(j=i-1; j>=0; j--)
			if(a[j+1]<a[j])
			{
				temp   = a[j];
				a[j]   = a[j+1];
				a[j+1] = temp;
			}
	return;
}

//Function for void sort on an array.//
void selection(int length, int a[])	
{
	int i, j, temp;
	
	for(i=0; i< (length-2); i++)
		for(j= i+1; j<= (length-1); j++)
			if(a[i] > a[j])
			{ 
				temp = a[i];
		      	a[i] = a[j];
			  	a[j] = temp;
			}
	return;			
}

//Function for a bubble sort on an array.//
void bubble(int length, int a[])
{
	int i, j, temp;
	
	for(i=0; i < (length - 1); i++)
	{
		for (j=0; j < (length - i - 1); j++)
		{
			if (a[j] > a[j+1]) 
			{
				temp   =  a[j];
				a[j]   =  a[j+1];
				a[j+1] =  temp;
			}
		} 
	}
	return;
}

//Helper funciton to help sort 2 subarrays within merge//
void mergesort(int a[], int L[], int leftlength, int R[], int rightlength)
{
	int i, j, k;
	
	i=0;
	j=0;
	k=0;
	
	while (i<leftlength && j< rightlength)
	{
		if(L[i] < R[j]) a[k++] = L[i++];
		else a[k++] = R[j++];
	}
	while(i < leftlength) a[k++] = L[i++];
	while(j < rightlength) a[k++] = R[j++];
}

//
void merge(int length, int a[])
{
	int mid, i, L[], R[];
	if(length < 2) return; 
	
	mid = length/2; 
	
	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((length- mid)*sizeof(int)); 
	
	for(i = 0; i<mid; i++) L[i] = a[i];
	for(i = mid; i<length; i++) R[i-mid] = a[i];
	
	merge(L,mid);
	merge(R,length-mid);
	mergesort(a,L,mid,R, length-mid);
	free(L);
	free(R);
}

//A function for comparing two arrays and returns true or false//
int compare(int a[], int b[])
{
	int i;
	int n = sizeof(a) / sizeof(a[0]);
	
	for(i=0; i<n; i++)
	{
		if (a[i] != b[i]) 
		return 0;
	}
	return 1;
}

