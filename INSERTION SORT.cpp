// C++ program for insertion sort 
#include <bits/stdc++.h> 
using namespace std; 


void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) 
	{ 
		key = arr[i]; 
		j = i - 1; 
		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
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
	
	insertionSort(array, size);
	
	cout<<"\nSORTED ARRAY USING HEAP SORT: ";
	printArray(array,size);
}
 

