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
//this function will sort element 
void selectionSort(int arr[], int size) 
{ 
	//total pass require for sorting? n-1
	for (int i = 0; i < size-1; i++) 
	{ 
		
		int min_idx = i; //intially index of small element
		
		//now compare element from (i+1)th to nth element
		for (int j = i+1; j < n; j++) 
		{
			if (arr[j] < arr[min_idx]) //check condition for change small element index
				min_idx = j; //now change index of small element
		}
		
		//check that if we require to change element
		if(min_idx != i)
		{
			swap(&arr[min_idx], &arr[i]); //call swap function
		}
	} 
} 

//main funcion
int main()
{
	int size;
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

	cout<<"\nSORTED ARRAY AFTER SELECION SORT: \n";
	//print array element
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
