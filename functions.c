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

void merge(int *A,int *L,int leftCount,int *R,int rightCount)
 {
	int i,j,k;

	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) 
	{
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
	
	return;
}

// Recursive function to sort an array of integers.//
void mergesort(int n,int a[]) 
{
	int mid,i, *L, *R;
	if(n < 2) return; 
	mid = n/2;  

	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((n- mid)*sizeof(int)); 
	
	for(i = 0;i<mid;i++) L[i] = a[i]; 
	for(i = mid;i<n;i++) R[i-mid] = a[i]; 

	mergesort(L,mid);  
	mergesort(R,n-mid);  
	merge(a,L,mid,R,n-mid);  
        free(L);
        free(R);
		
		return;
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

