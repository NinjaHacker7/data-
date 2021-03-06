  // Quicksort 
#include <iostream>
#include <algorithm>            
using namespace std;

template <class T>
T partition(T arr[], int start, int end)
{
    
    T pivotValue = arr[start];
    T pivotPosition = start;

    for (int pos = start + 1; pos <= end; pos++)
    {
        if (arr[pos] < pivotValue)
        {
            swap(arr[pivotPosition + 1], arr[pos]);
            swap(arr[pivotPosition], arr[pivotPosition + 1]);
            pivotPosition ++;
        }
	}
    return pivotPosition;
}

template <class T>
T quickSort(T arr[], int start, int end)
{
    if (start < end)        //test for base case start == end
    {
        int p = partition(arr, start, end);

        quickSort(arr, start, p - 1);

        quickSort(arr, p + 1, end);
	}
	return 0;  
}
/*
int main()
{
    int array[SIZE] = {100, 35, 7, 21, 89, 10, 148, 983, 33, 29};

    for (int k = 0; k < SIZE; k++)
        cout << array[k] << " ";
    cout << endl;

    quickSort(array, 0, SIZE-1);

    for (int k = 0; k < SIZE; k++)
        cout << array[k] << " ";
    cout << endl;

    return 0;
}*/