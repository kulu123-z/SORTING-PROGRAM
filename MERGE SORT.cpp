
#include<stdlib.h> 
#include<iostream>
using namespace std; 
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	/* create temp arrays */
	int L[n1], R[n2]; 

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = l; // Initial index of merged subarray 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	/* Copy the remaining elements of L[], if there 
	are any */
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	/* Copy the remaining elements of R[], if there 
	are any */
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
/*void merge(int arr[], int left, int middle, int right) 
{ 
	int i, j, k; 
	int n1 = middle - left + 1; //first array element
	int n2 = right - middle; // second array element

	int L[n1], R[n2]; 

	/* Copy data to temp arrays L[] and R[] */
	/*for (i = 0; i < n1; i++) 
		L[i] = arr[left + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[middle + 1+ j]; 

	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = 1; // Initial index of merged subarray 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} */

void mergeSort(int arr[], int left, int right) 
{ 
	if (left < right) 
	{ 
		// Same as (l+r)/2, but avoids overflow for 
		// large l and h 
		int middle = left+(right-left)/2; 
		//int middle = (left+right)/2;
		// Sort first and second halves 
		mergeSort(arr, left, middle); 
		mergeSort(arr, middle+1, right); 

		merge(arr, left, middle, right); 
	} 
} 


void printArray(int A[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout<<A[i]<<"  ";
	cout<<endl;
} 

int main()
{
	int size;
	
	cout<<"\nENTER SIZE OF ARRAY: ";
	cin>>size;
	
	int array[size];
	
	cout<<"\nENTER ELEMENT OF ARRAY: ";
	for(int i=0; i<size; i++)
		cin>>*(array + i);
	
	cout<<"\nARRAY WITHOUT SORT: ";
	printArray(array, size);
	
	mergeSort(array,0, size-1);
	
	cout<<"\nSORTED ARRAY USING HEAP SORT: ";
	printArray(array,size);
} 

