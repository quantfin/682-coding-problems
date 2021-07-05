#include <iostream>
#include<algorithm> // for sort function
using namespace std;

// Function to print all distinct combinations of length `k`
void findCombinations(int arr[], string out, int i, int n, int k)
{
    // invalid input
    if (k > n) {
        cout<<"No Combination Found!";
        return;
    }

    // base case: combination size is `k`
    if (k == 0)
    {
        cout << out << endl;
        return;
    }

    // start from the next index till the last index
    for (int j = i; j < n; j++)
    {
        // add current element `arr[j]` to the solution and recur for next index
        // `j+1` with one less element `k-1`
        findCombinations(arr, out + " " + to_string(arr[j]) , j + 1, n, k - 1);

        // uncomment the following code to handle duplicates

        /* while (j < n - 1 && arr[j] == arr[j + 1]) {
            j++;
        } */
    }
}

int main()
{
    int arr[] = { 1, 2, 3,4,2 };
    int k = 2;

    int n = sizeof(arr) / sizeof(arr[0]);

    /* If the array contains repeated elements, sort it to handle
       duplicate combinations */

     sort (arr, arr + n);

    // process elements from left to right
    findCombinations(arr, "", 0, n, k);

    return 0;
}
