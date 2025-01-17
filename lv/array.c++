#include<iostream>
#include<climits>
using namespace std;

// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i] << " ";
//     }
// }

// int maxValue(int arr[],int size){
//     int maxy = INT_MIN;
//     for(int i=0;i<size;i++){
//        // if(arr[i]>max) max=arr[i];
//        maxy = max(maxy,arr[i]);     //   <<==========
//     }
//     return maxy;
// }

// int minValue(int arr[],int size){
//     int min = INT_MAX;
//     for(int j=0;j<size;j++){
//         if(arr[j]<min) min=arr[j];
//     }
//     return min;
// }

// int sumofDigits(int arr[],int size){
//     int sum =0;
//     for(int i=0;i<size;i++){
//         sum = sum+arr[i];
//     }
//     return sum;
// }

// int linearSearch(int arr[],int size,int value){
//     for(int i=0;i<size;i++){
//         if(arr[i]==value) return i;        
//     }
//     return -1;
// }

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// void revereseArray(int arr[],int  size){
//     int start = 0;
//     int end = size-1;
//     while (end>start)
//     {
//         int  temp=arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }

void swapAlt(int arr[], int size){
  int x=0;
  while((x+1) < size){
    int temp = arr[x];
    arr[x] = arr[x+1];
    arr[x+1] = temp;
 
    x= x+2;
  }

}

int main(){
    
    //     int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//  printArray(arr,15);
//    int value;
//    cin>>value;
   int size;
   cin>> size;
   //int a,b;
   
   int arr[100];
   for(int i=0;i<size;i++){
    cin>>arr[i];
    
   }

printArr(arr,size);

swapAlt(arr,size);

cout<<endl;
printArr(arr,size);

//  revereseArray(arr,size);


   //cout<<endl;
  // printArr(arr,size);

  
    

//    cout<<"Max value is:"<<maxValue(arr,size)<<endl;
//    cout<<"Min value is:"<<minValue(arr,size)<<endl;
 // cout<<"Sum of digits of array is:"<<sumofDigits(arr,size)<<endl;

// if(linearSearch(arr,size,value)==-1){
//     cout<<"Element not found"<<endl;
// }else{
//  cout<<"elemnet founf at index:"<<linearSearch(arr,size,value)<<endl;
// }
}