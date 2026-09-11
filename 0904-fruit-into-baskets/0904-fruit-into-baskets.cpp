class Solution {
public:
    int totalFruit(vector<int>& s) {
        int n = s.size();
        int low = 0;
        int high = 0;
        int res = INT_MIN;
        unordered_map<int,int>f;

        for(high = 0;high<n;high++)
        {
            f[s[high]]++;
            while(f.size()>2)
            {
                f[s[low]]--;
                if(f[s[low]] == 0)
                f.erase(s[low]);
                low++;
            }
            int len = high-low+1;
            res = max(res,len);
        }
        return res;
    }
};