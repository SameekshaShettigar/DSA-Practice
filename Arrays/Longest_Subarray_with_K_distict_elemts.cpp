
#include <bits/stdc++.h>
using namespace std;
long long maxGoodSubarray(vector<int>& A, int k)
{
    unordered_map<int,int> freq;
    int left = 0;
    long long sum = 0;
    long long maxSum = 0;
    for(int right = 0; right < A.size(); right++)
    {
        freq[A[right]]++;
        sum += A[right];
        while(freq.size() > k)
        {
            freq[A[left]]--;
            sum -= A[left];
            if(freq[A[left]] == 0)
                freq.erase(A[left]);
            left++;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    cout << maxGoodSubarray(A, k);
    return 0;
}


Complexity	Value
Time Complexity	O(N)
Space Complexity	O(N) worst case

