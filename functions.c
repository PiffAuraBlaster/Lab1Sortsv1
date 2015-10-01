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


void bubble(int length, int a[])
{
	int i, j, temp;
	
	for(j=3; j>=0; j--)
		for(i=0; i<=j; i++)
			if(a[i] > a[i+1])
			{
				temp   = a[i];
				a[i]   = a[i+1];
				a[i+1] = temp;
			}
	return;
}

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
}

