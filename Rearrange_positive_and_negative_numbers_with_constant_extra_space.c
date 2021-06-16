


// c++ program to rearrange positive and negative numbers in an array
//Approach 1: Modified Insertion Sort


#include<stdio.h>

// A utility program to print an array of size n
void PrintArray (int arr[], int n )
{
    for(int i=0 ; i<n ; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Function ot rearrange positive and negative numbers in an array

void RearrangePosNeg(int arr[] , int n)
{
    int key,j;
    for(int i=1;i<n;i++){
        key=arr[i];

        // if currrent element is positive do nothing 

        if(key>0)
        continue;

        /* if current element is negative , shift positive elements of arr[0...i-1], to one position to their right */

        j= i-1;
        while(j>= 0 && arr[j]>0){
            arr[j+1] = arr[j];
            j=j+1;
        } 
        //put negative elements in its right position 
    }
}

/*Driver program to test above funtions */

int main()
{
    int arr[] = {-12,-11,-15,4,6,12,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    RearrangePosNeg(arr,n);
    PrintArray(arr,n);

    return 0;
}


//output: -12 -11 -15 4 6 12 11 
