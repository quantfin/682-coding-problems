

#include<iostream>
using namespace std;

// Function to transfor the array
void fixArray(int arr[], int n)
{
    int i,j,temp;


   //Iterate over the array

   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           //check if any arr[j] exists such that arr[j] is equal to i

           if (arr[j]==i){
               temp = arr[j];
               arr[j] = arr[i];
               arr[i] = temp;
               break;
           }
       }
   }

   //Iterate over array
   for(i=0;i<n;i++)
   {
       //If not present
       if(arr[i] != i)
       {
           arr[i] = -1;
           cout<<i;
       }
   }

   // print the output
   cout<<" Array after Rearranging" << endl;
   for(i=0; i<n ; i++)
   {
       cout<<arr[i] << " ";
   }
}

// Driver code
int main()
{
    int arr[] = {-1,-1,6,1,9,3,2,-1,4,-1};
    int n = sizeof(arr)/ sizeof(arr[0]);

    //Function call

    fixArray(arr,n);
}

// output:  Array after Rearranging
-1 1 2 3 4 -1 6 -1 -1 9 
