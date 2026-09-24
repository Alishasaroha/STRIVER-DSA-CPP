class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = *max_element(nums.begin(), nums.end());
        int currMax = 1 ;
        int currMin = 1;
        int n = nums.size();

        for (int i = 0; i< n ; i++){
            int temp = currMax * nums[i];
            currMax = max({temp , currMin * nums[i] , nums[i]});
            currMin = min({temp , currMin *nums[i], nums[i]});
            res = max (res , currMax);
        }
        return res;
    }
};