#include <iostream>
#include <vector>
using namespace std;

int fsecondLargest(vector<int> &a,int n){
    int largest =a[0];
    int secondLargest = -1;

    for(int i=0;i<n;i++){
        if(largest<a[i]) {
            secondLargest=largest;
            largest=a[i];
            }
            else if (a[i]<largest && a[i]>secondLargest){
                secondLargest=a[i];
            }
    }
    return secondLargest;
}

int fsecondSmallest(vector<int> &a,int n){
    int smallest = a[0];
    int secondSmallest = INT_MAX;

    for(int i=0;i<n;i++){
        if(smallest>a[i]){
            secondSmallest=smallest;
            smallest=a[i];
        }
        else if (a[i]>smallest && a[i]<secondSmallest){
                secondSmallest=a[i];
            }
    }

    return secondSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
   int secondLargest = fsecondLargest(a,n);
   int secondSmallest = fsecondSmallest(a,n);

   return {secondLargest,secondSmallest};
}