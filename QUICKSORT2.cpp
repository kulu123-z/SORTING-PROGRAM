#include <iostream>

void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << std::endl;
}

/*int partition(int a[], int beg, int end)  
{  
      
    int left, right, temp, loc, flag;     
    loc = left = beg;  
    right = end;  
    flag = 0;  
    while(flag != 1)  
    {  
        while((a[loc] <= a[right]) && (loc!=right))  
        right--;  
        if(loc==right)  
        flag =1;  
        else if(a[loc]>a[right])  
        {  
            temp = a[loc];  
            a[loc] = a[right];  
            a[right] = temp;  
            loc = right;  
        }  
        if(flag!=1)  
        {  
            while((a[loc] >= a[left]) && (loc!=left))  
            left++;  
            if(loc==left)  
            flag =1;  
            else if(a[loc] <a[left])  
            {  
                temp = a[loc];  
                a[loc] = a[left];  
                a[left] = temp;  
                loc = left;  
            }  
        }  
    }  
    return loc;  
}  
void swap(int *val1, int *val2)
{
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

int partition(int *array, int start, int end)
{
    int pIndex = start;
    int pivot = *(array + end);
    
    for(int i = start; i<end; i++)
    {
        if(*(array + i) <= pivot)
        {
            swap(array[i],array[pIndex]);
            pIndex++;
        }
    }
    swap(array[pIndex], array[end]);
    return(pIndex);
}

void quickSort(int a[], int beg, int end)  
{  
      
    int loc;  
    if(beg<end)  
    {  
        loc = partition(a, beg, end);  
        quickSort(a, beg, loc-1);  
        quickSort(a, loc+1, end);  
    }  
*/

void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}

int main()
{
    int array[] = {95, 45, 48, 98, 1,1,-23,67,9999,0,45,-902};
    int n = sizeof(array)/sizeof(array[0]);
    std::cout<<n<<std::endl;

    std::cout << "Before Quick Sort :" << std::endl;
    printArray(array, n);

    quickSort(array, 0, n-1);

    std::cout << "After Quick Sort :" << std::endl;
    printArray(array, n);
    return (0);
}
