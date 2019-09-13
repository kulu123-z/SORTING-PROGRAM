// C++ program for implementation of selection sort 
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 
/*int selectionSort(int arr[],int k, int n) 
{ 
	int  j, min,pos; 

		min = arr[k]; 
		pos =k;
		for (j = k+1; j < n; j++) 
		{
		
			if (arr[j] < min) 
			{
				min = arr[j]; 
				pos = j;
			} 
		}
		return(pos);
} */

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_idx; 

	for (i = 0; i < n-1; i++) 
	{ 
		min_idx = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx]) 
			min_idx = j; 
//		 Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]); 
	} 
} 

int main()
{
	int size,loc,temp;
	cout<<"\nENTER SIZE OF ARRAY:";
	cin>>size;
	int arr[size];
	cout<<"\nENTER ARRAY ELEMENT: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	selectionSort(arr,size);
/*	for(int i=0;i<=size-2;i++)
	{
		loc = selectionSort(arr, i, size);
		temp = arr[i];
		arr[i]= arr[loc];
		arr[loc]= temp;
	}*/
	cout<<"\nSORTED ARRAY: \n";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
