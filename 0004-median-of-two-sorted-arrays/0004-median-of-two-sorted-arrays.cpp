class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        int id = 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> res(m + n);

        while (i < m and j < n) {
            if (nums1[i] < nums2[j]) {
                res[id] = nums1[i];
                id++;
                i++;
            } else {
                res[id] = nums2[j];
                id++;
                j++;
            }
        }
            while (i < m) {
                res[id] = nums1[i];
                id++;
                i++;
            }
            while (j < n) {
                res[id] = nums2[j];
                id++;
                j++;
            }
        

        int siz = res.size();
        double median;

        if (siz % 2 == 1)
           return  median = res[siz / 2];
        else
           return median = abs(res[siz / 2 - 1] + res[siz / 2]) / 2.0;
    }
};