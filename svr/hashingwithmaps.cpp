#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //map  keep it in sortedd oreder
    //timecomplexity of map i log(n) in every case
    //but timecomplexity of unordered map is o(1) in best and avg and  o(n) in wrost case
    //due to collision it is because if all elemnt occur on same hash index
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<mpp[number]<<endl;
    }


}
