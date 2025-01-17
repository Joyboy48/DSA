// push the max to the last by adjacent swaps

/*
0 --- n-1
0 --- n-2
0 --- n-3
.
.
0 --- 1

1st loop i - n-1=>1
2nd loop j - 0=>i

*/

//time complexity  worst and avg = o(n^2) best case o(n) if the arr is already srted


#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i=n-1;i>=0;i--)
    {
        int didswap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1]; // swap
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        if(didswap == 0) break; 
     }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr.data(), n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}