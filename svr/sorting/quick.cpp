//pick a pivot and place it in its correct place in the sorted array
//smaller on the left and larger on the right

//time conplexity is nlogn


#include<iostream>
#include<vector>
using namespace std;

int findPartitionIndex(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot && i<=high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);

    }
    swap(arr[low],arr[j]);

    return j;

}

void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int partitionIndex = findPartitionIndex(arr,low,high);
        qs(arr,low,partitionIndex-1);
        qs(arr,partitionIndex+1,high);
    }
}

void quick_sort(vector<int> &arr,int n){
    qs(arr,0,n-1);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr,n);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}