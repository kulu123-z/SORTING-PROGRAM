#include<iostream>
using namespace std;

void radixSort(int [], int);
int getMax(int [], int);
void countSort(int [], int , int);
void printArray(int [], int);
/*
final checked it is working program
int largest(int a[])  
{     
    int larger=a[0], i;   
    for(i=1;i<10;i++)  
    {  
        if(a[i]>larger)  
        larger = a[i];  
    }  
    return larger;  
}  
void radix_sort(int a[])  
{  
    int bucket[10][10], bucket_count[10];  
    int i, j, k, remainder, NOP=0, divisor=1, larger, pass;  
    larger = largest(a);  
    while(larger>0)  
    {  
        NOP++;  
        larger/=10;  
    }  
    for(pass=0;pass<NOP;pass++) // Initialize the buckets  
    {  
        for(i=0;i<10;i++)  
        bucket_count[i]=0;  
        for(i=0;i<10;i++)  
        {  
            // sort the numbers according to the digit at passth place            
            remainder = (a[i]/divisor)%10;  
            bucket[remainder][bucket_count[remainder]] = a[i];  
            bucket_count[remainder] += 1;  
        }  
        // collect the numbers after PASS pass  
        i=0;  
        for(k=0;k<10;k++)  
        {  
            for(j=0;j<bucket_count[k];j++)  
            {  
                a[i] = bucket[k][j];  
                i++;  
            }  
        }  
        divisor *= 10;  
      
}  
}  
*/

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
