// C++ program for implementation of selection sort 
#include <bits/stdc++.h> 
using namespace std; //standard input output

//swap function for swap two element with pointer
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

	//total pass require for sorting? n-1
	for (i = 0; i < n-1; i++) 
	{ 
		
		min_idx = i; //intially index of small element
		
		//now compare element from (i+1)th to nth element
		for (j = i+1; j < n; j++) 
		{
			if (arr[j] < arr[min_idx]) //check condition for change small element index
				min_idx = j; //now change index of small element
		}
		
		// Swap the found minimum element with the first element 
		swap(&arr[min_idx], &arr[i]); //call swap function
	} 
} 

//main funcion
int main()
{
	int size,loc,temp;
	cout<<"\nENTER SIZE OF ARRAY:";
	cin>>size;
	int arr[size];//array with user defined size
	cout<<"\nENTER ARRAY ELEMENT: ";
	//taking input for array element
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	//call to selection sort
	selectionSort(arr,size);
/*	for(int i=0;i<=size-2;i++)
	{
		loc = selectionSort(arr, i, size);
		temp = arr[i];
		arr[i]= arr[loc];
		arr[loc]= temp;
	}*/
	cout<<"\nSORTED ARRAY AFTER SELECION SORT: \n";
	//print array element
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
