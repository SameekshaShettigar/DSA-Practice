class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        vector<int> finalArray;

        while(i <= n - k){
            int maxVal = nums[i];
            int j = 0;

            while(j < k){
                if(nums[i + j] > maxVal){
                    maxVal = nums[i + j];
                }
                j++;
            }

            finalArray.push_back(maxVal);
            i++;
        }

        return finalArray;
    }
};





tc: O(n*n)
sc: O(n)



  
OPTIMIZED SOLUTION IS AS FOLLOWS

  
