#include<iostream>
using namespace std;

void swapElement(int &, int &);
void printArray(int [], int);
void heapSort(int [], int);
void heapify(int [], int, int);

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
	
	heapSort(array, size);
	
	cout<<"\nSORTED ARRAY USING HEAP SORT: ";
	printArray(array,size);
}

void printArray(int array[], int size)
{

	for(int i = 0; i<size; i++)
		cout<<*(array + i)<<"  ";
	
}

void heapSort(int array[], int size)
{
	for(int i = size/2 -1; i>=0; i--)
		heapify(array, size, i);
	
	for(int i = size-1; i>=0 ;i--)
	{
		swapElement(array[0], array[i]);
		
		heapify(array, i, 0);
	}
}
void swapElement(int &element1, int &element2)
{
	int temp;
	temp = element1;
	element1= element2;
	element2 = temp;
}
void heapify(int array[], int size, int i)
{
	int largest = i;// root value
	int left = 2*i + 1;
	int right = 2*i + 2;
	
	if(left < size && array[left] > array[largest])
	{
		largest = left;
	}
	if(right < size && array[right] > array[largest])
	{
		largest = right;
	}
	
	if(largest!=i)
	{
		swapElement(array[i], array[largest]);
		
		heapify(array, size , largest);
	}
}
