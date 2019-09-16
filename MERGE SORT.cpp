
#include<stdlib.h> 
#include<iostream>
using namespace std;
int size;
/*void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	 create temp arrays 
	int L[n1], R[n2]; 

	 Copy data to temp arrays L[] and R[] 
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	 Merge the temp arrays back into arr[l..r]
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

	Copy the remaining elements of L[], if there 
	are any 
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	Copy the remaining elements of R[], if there 
	are any 
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
}*/ 
void merge(int a[], int beg, int mid, int end)  
{  
    int i=beg,j=mid+1,k,index = beg;  
    int temp[size];  
    while(i<=mid && j<=end)  
    {  
        if(a[i]<a[j])  
        {  
            temp[index] = a[i];  
            i = i+1;  
        }  
        else   
        {  
            temp[index] = a[j];  
            j = j+1;   
        }  
        index++;  
    }  
    if(i>mid)  
    {  
        while(j<=end)  
        {  
            temp[index] = a[j];  
            index++;  
            j++;  
        }  
    }  
    else   
    {  
        while(i<=mid)  
        {  
            temp[index] = a[i];  
            index++;  
            i++;  
        }  
    }  
    k = beg;  
    while(k<index)  
    {  
        a[k]=temp[k];  
        k++;  
    }  
}  


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

