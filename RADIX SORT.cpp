#include<iostream>
using namespace std;

void radixSort(int [], int);
int getMax(int [], int);
void countSort(int [], int , int);
void printArray(int [], int);

int main()
{
	int array[] = {170, 45, 75, 90, 802, 24, 2, 66}; 
    int size = sizeof(array)/sizeof(array[0]);
	
//	cout<<"\nENTER ELEMENT OF ARRAY: ";
//	for(int i=0; i<size; i++)
//		cin>>*(array + i);
	
	cout<<"\nARRAY WITHOUT SORT: ";
	printArray(array, size);
	
	radixSort(array, size);
	
	cout<<"\nSORTED ARRAY USING RADIX SORT: ";
	printArray(array,size);
}

void printArray(int array[], int size)
{

	for(int i = 0; i<size; i++)
		cout<<*(array + i)<<"  ";
	
	
}

int getMax(int array[], int size)
{
	int max = array[0];
	
	for(int i =1; i<size; i++)
	{
		if(max < array[i])
			max = array[i];
	}
	
	return(max);
}

void radixSort(int array[], int size)
{
	int max = getMax(array, size);
	for(int exp = 1; max/exp > 0; exp *= 10)
	{
		countSort(array, size, exp);
	}
	
	
}

void countSort(int array[], int size, int exp)
{
	int outputArray[size];
	int count[10] = {0};
	
	for(int i = 0; i<size; i++)
	{
		count[ (array[i]/exp)%10 ]++;

	}	
	for(int i = 1; i<10; i++)
	{
		count[i] += count[i-1];
	}
		
	for(int i = size-1; i>=0;i--)
	{
		outputArray[count[(array[i]/exp)%10] - 1]= array[i];
		count[(array[i]/exp)%10]--;
	}
	for(int i=0;i<size;i++)
	{
		array[i]= outputArray[i];
	}
	cout<<endl;
	/*for(int i=0;i<size;i++)
	{
		cout<<array[i]<<"  ";
	}*/
	
}
