#include<iostream>//include iostream
using namespace std;//for standard nput and output

void bubbleSort(int [],int );// declaration of bubbleSort function

//main function
int main()
{
	int size;//for size of array
	cout<<"\nENTER SIZE OF ARRAY:";
	cin>>size;
	int arr[size];
	cout<<"\nENTER ARRAY ELEMENT: ";
	
	//taking input of array element
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	bubbleSort(arr,size);//function call bubbleSort
	
	cout<<"\nAFTER BUBBLE SORT:\n";
	
	//print array element after swap
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

 //function that sort array using concept of bubble sort
void bubbleSort(int a[],int size)
{
	int temp=0,flag=0;
	//how many pass are require fro sorting? = n-1
	for(int i=1;i<=size-1;i++)
	{
		flag=0;
		//compare all element decrese one element after one pass beacause after one pass last element will be sorted form
		for(int j=0; j <= size-1-i; j++)
		{
			//compare jth and (j+1)th element
			if( a[j] > a[j+1] )
			{
				//if jth element is greater then swap two element
				flag = 1;
				temp = a[j];//temp variable for swap using third variable
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		//there is swap is occured during pass if array is sorted so that there is no need to go for further pass and return sorted array
		if(flag == 0)
		{
			cout<<"\nROUND: "<<i<<endl;//in how many round(pass) your array is sorted
			return;
		}
	}
}
