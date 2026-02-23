#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    while(m--){
        int type,i,j;
        cin >> type >> i >> j;

        vector<int> temp(arr.begin() + (i - 1),
                         arr.begin() + j);

        arr.erase(arr.begin() + (i - 1),
                  arr.begin() + j);

        if(type == 1){
            arr.insert(arr.begin(),
                       temp.begin(),
                       temp.end());
        }
        else{
            arr.insert(arr.end(),
                       temp.begin(),
                       temp.end());
        }
    }

    int absolute = abs(arr.front() - arr.back());
    cout << absolute << endl;

    for(auto x : arr){
        cout << x << " ";
    }

    return 0;
}


//tc: O(n*m)
//sc:O(n)
