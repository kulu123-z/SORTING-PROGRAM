// C++ program for insertion sort 
#include <bits/stdc++.h> 
using namespace std; 

//insertionSort function that will sort array element using insertion sort method
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	//here we assume that first element is on right place so loop start from second element
	for (i = 1; i < n; i++) 
	{ 
		key = arr[i]; 
		j = i - 1; 
		//compare all element whose index is less then key index and also key is less then compare element
		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 
//print function that print array element
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

//main function
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
	printArray(array, size);//call to printArray function
	
	insertionSort(array, size);//call to insertionSort function
	
	cout<<"\nSORTED ARRAY USING HEAP SORT: ";
	printArray(array,size);
}
 

