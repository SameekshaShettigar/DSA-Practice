class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> deq;
        vector<int> result;

        for(int i=0; i<nums.size() ; i++){

                //sliding window
            if(!deq.empty() && deq.front() == i-k){
                deq.pop_front();
            }


            //smaller element
            // front->[3,4,9] ->back
            while( !deq.empty() && deq.back() < nums[i]){
                deq.pop_back();
            }
            deq.push_back(i);

            if(i>=k-1){
                result.push_back(nums[deq.front()]);
            }

        }
        return result;
    }
};


TC: O(n)
SC: O(k)   k-> window size
