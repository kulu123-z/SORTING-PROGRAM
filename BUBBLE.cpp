#include<iostream>
using namespace std;
void bubbleSort(int [],int );
int main()
{
	int size;
	cout<<"\nENTER SIZE OF ARRAY:";
	cin>>size;
	int arr[size];
	cout<<"\nENTER ARRAY ELEMENT: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	bubbleSort(arr,size);
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void bubbleSort(int a[],int size)
{
	int temp=0,flag=0;
	for(int i=1;i<=size-1;i++)
	{
		flag=0;
		for(int j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)
		{
			cout<<"\nROUND: "<<i<<endl;
			return;
		}
	}
}
