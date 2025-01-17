//#include <bits/stdc++.h> 

//brute sort then last element

#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> &arr, int n) {
   
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(largest<arr[i]) largest = arr[i];
    }

    return largest;
}