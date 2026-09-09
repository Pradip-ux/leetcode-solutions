class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int maxdiff = INT_MAX;
        int n = nums.size();
        int res_sum = 0;

        for(int i=0;i<n-2;i++)
        {
            int left = i + 1;
            int right = n-1;

            while(left<right)
            {
                int sum = nums[i]+nums[left]+nums[right];
                int diff = abs(sum-target);
                
                if(diff<maxdiff)
                {
                    maxdiff=diff;
                    res_sum=sum;
                }
                if(sum==target)
                {
                    return sum;
                }
                else if(sum<target)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return res_sum;
    }
};