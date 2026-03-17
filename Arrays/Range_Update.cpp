
#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
// function definition
void update(vector<long long> &A, int l, int r)
{
    long long base = A[l];
    for(int i = l; i <= r; i++)
    {
        A[i] = ((i - l + 1) * base) % MOD;
    }
}
long long rangeSum(vector<long long> &A, int l, int r)
{
    long long sum = 0;
    for(int i = l; i <= r; i++)
    {
        sum = (sum + A[i]) % MOD;
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    vector<long long> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    int q;
    cin >> q;
    long long answer = 0;
    while(q--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if(type == 1)
            update(A, l, r);
        else
            answer = (answer + rangeSum(A, l, r)) % MOD;
    }
    cout << answer << endl;
}


The update and rangeSum functions both iterate through the range [l, r], which in the worst case is O(n). Since there are q queries, the overall time complexity becomes O(nq). The algorithm uses an array of size n, so the space complexity is O(n).
