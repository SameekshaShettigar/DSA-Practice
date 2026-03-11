#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int countSubarray(vector<int> arr, int k){

    unordered_map<int,int> mpp;

    int xr = 0;
    int count = 0;

    mpp[0] = 1;   // important initialization

    for(int i = 0; i < arr.size(); i++){

        xr = xr ^ arr[i];

        int x = xr ^ k;

        if(mpp.find(x) != mpp.end())
            count += mpp[x];

        mpp[xr]++;
    }

    return count;
}

int main(){

    vector<int> arr = {4,2,2,6,4};
    int k = 6;

    cout << countSubarray(arr, k);

}
