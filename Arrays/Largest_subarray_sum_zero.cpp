#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int largestZeroSumSubarray(vector<int> &arr)
{
    unordered_map<int,int> mp;

    int sum = 0;
    int maxLen = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        // Case 1: sum becomes 0
        if(sum == 0)
        {
            maxLen = i + 1;
        }

        // Case 2: sum already exists
        if(mp.find(sum) != mp.end())
        {
            maxLen = max(maxLen, i - mp[sum]);
        }
        else
        {
            // store first occurrence
            mp[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};

    cout << largestZeroSumSubarray(arr);

    return 0;
}
