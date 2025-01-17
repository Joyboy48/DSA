//select minimum and swap

//time complexity for all casaes is o(n^2)

#include<iostream>
#include<vector>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min =i;
        for(int j =i;j<n;j++){
            if(arr[j]<arr[min]) min = j;     
        }
        int temp = arr[min];    //swap
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr.data(),n);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}