
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> freq;
        int n = fruits.size();
        int left=0;
        int count=0; // no need of using this tho
        int maxCount=0;
        for(int right = 0 ; right < n ; right++){
            freq[fruits[right]]++;
            count++;
            while(freq.size() > 2){
                freq[fruits[left]]--;
                count--;
                if(freq[fruits[left]] == 0){
                    freq.erase(fruits[left]);
                }
                left++;
            }
            maxCount = max(count,maxCount); // max(maxCount,right-left+1)
        }
        return maxCount;
    }
};


Complexity	Value
Time Complexity	O(N)
Space Complexity	O(1)




