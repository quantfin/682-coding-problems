#include<stdio.h>

//Function to perform insertion sort on 'arr[]'
void insertionSort(int arr[] , int n)
{
    // Start from the second element (the element at 0th index is already sorted)
    for(int i = 0; i< n ; i++)
    {
        int value = arr[i];
        int j = i;

        //find index "j" within the sorted subset 'arr[0...i-1]' where element 'arr[i]' belongs
        while(j>0 && arr[j-i]> value)
        {
            arr[j] =arr[j-1];
            j--;
        }
        // note that the subarray 'arr[j..i-1]' is shifted to the right by one position, i.e. , arr[j+1..i]

        arr[j] = value;
    }
}

//Function to print'n' elements of array 'arr'
void printArray(int arr[], int n)
{
    for(int i =0; i<n ; i++) {
        printf(" %d", arr[i]);
        
    }
}

int main(void)
{

int arr[] = {3,8,5,4,1,9,-2};
int n = sizeof(arr)/sizeof(arr[0]);

insertionSort(arr,n);

//printt the sorted array

printArray(arr,n);

return 0;
}
