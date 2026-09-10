class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int len = INT_MAX;
        int sum = 0;
        for (int high = 0; high < n; high++) {
            sum += nums[high];
            
            while(sum>=target)
            {
               
                len = min(len,high-low+1);
                sum -= nums[low];
                ++low;
            }
               
                

        }
        return (len == INT_MAX) ? 0 :len;
    }
};