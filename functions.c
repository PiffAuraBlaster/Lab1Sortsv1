#include <stdio.h>
#include "functions.h"
#include <math.h>

//A function to print arrays after the functions are run.//
void printarray(int length, int a[])
{
	int i;
	
	for(i=0; i<length; i++)
	
	{
		printf("%d\n", a[i]);
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

<<<<<<< HEAD
void mSort(int a, int low, int mid, int high)
{
	int i, j, k, l, temp;
	
	i=low;
	j=mid+l;
	l=low;

	while((l<=mid)&&(j<=high))
	{
		if(a[l]<=a[j])
		{
		   temp[i]=a[l];
	       l++;
		}
	    else
		{
	       temp[i]=arr[j];
	       j++;
	    }
	    i++;
	}

	if(l>mid)
	{
		for(k=j;k<=high;k++)
	   {
		   temp[i]=a[k];
		   i++;
	   }
	}
	else
	{
		for(k=l;k<=mid;k++)
		{
			temp[i]=a[k];
			i++;
		}
	}
   
	for(k=low;k<=high;k++)
		{
			a[k]=temp[k];
		}
}

void partition(int a[], int low, int high)
{
	int mid;
	
	if(low<high)
	{
		mid = (low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
		mSort(a,low,mid,high);
	}
	return;
}

void merge(int length, int a[])
{
	partition(a, 0, length-1);
=======
//A function for comparing two arrays and returns true or false;
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
>>>>>>> master
}

