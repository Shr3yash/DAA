/*
Name : Shreyash Bhatkar
TY-ET-A (Batch 2)
Roll Number 48.
Gr. No. 11910751
DAAoA Lab. Experiment 2
Title - Merge Sort
Description -
    This is the C++ program to perform merge sort on an array
Input -
    1. Array Size (5)
    2. Array Elements (12, 0, -9, 8, 5)
Output -
    1. Sorted Array (-9, 0, 5, 8, 12)
*/




#include<iostream>

using namespace std;

void merge(int arr[], int lb, int mid, int ub) // lb = lower bound, ub = upper bound
{
    int i = lb; // Pointer for left array
    int j = mid + 1; // Pointer for right array
    int k = 0; // Pointer for temporary array
    int b[ub - lb + 1];

    while(i <= mid && j <= ub)
    {
        if(arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    if(i > mid)
    {
        while(j <= ub)
        {
            b[k] = arr[j];
            k++;
            j++;
        }
    }
    else if(j > ub)
    {
        while(i <= mid)
        {
            b[k] = arr[i];
            k++;
            i++;
        }
    }

    for(int i = lb; i <= ub; i++)
    {
        arr[i] = b[i - lb];
    }
}

void mergeSort(int arr[], int lb, int ub)
{
    if(lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeSort(arr, lb, mid);
        mergeSort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of your array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int lb = 0;
    int ub = size - 1;
    mergeSort(arr, lb, ub);

    cout << "The sorted array is: " << endl;
    printArray(arr, size);

    return 0;
}

