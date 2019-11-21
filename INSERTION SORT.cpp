// C++ program for insertion sort 
#include <bits/stdc++.h> //input header file
using namespace std; 

//insertionSort function that will sort array element using insertion sort method
void insertionSort(int arr[], int size) 
{ 
	
	//here we assume that first element is on right place so loop start from second element
	for (int i = 1; i < size; i++) //i represent first index of unsorted array
	{ 
		int key = arr[i]; 
		int j = i - 1; //j represent last index of sorted array
		//compare all element whose index is less then key index and also key is less then compare element
		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j--;
		} 
		arr[j + 1] = key; 
	} 
} 
//print function that print array element
void printArray(int arr[], int size) 
{  
	for (int i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

//main function
int main()
{
	int size;//for input size
	
	cout<<"\nENTER SIZE OF ARRAY: ";
	cin>>size;//take input size
	
	int array[size];//array of input size
	
	//take input element
	cout<<"\nENTER ELEMENT OF ARRAY: ";
	for(int i=0; i<size; i++)
		cin>>*(array + i);
	
	//print element
	cout<<"\nARRAY WITHOUT SORT: ";
	printArray(array, size);//call to printArray function
	
	//this will sort element in sorted form
	insertionSort(array, size);//call to insertionSort function
	
	//print element
	cout<<"\nSORTED ARRAY USING INSERTION SORT: ";
	printArray(array,size);
}
 
