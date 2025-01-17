//takes the element and place it in correct order

/*
first elemnt already sorted
first two elemnet if not sorted sort them
first three elemnet if not sorted swap till not sorted (left swap)
.
.
.
firat loop i - 0=>n
j=i
while j>0 && a[j-1]>a[j]
swap
j--


*/

//time complexity worst and avg case will be o(n^2) for best case o(n )

#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i =0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
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
    insertion_sort(arr.data(), n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}