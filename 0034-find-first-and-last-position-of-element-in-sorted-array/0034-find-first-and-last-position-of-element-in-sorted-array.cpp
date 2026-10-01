class Solution {
public:
    int firstNo(vector<int>&nums , int target){
        int low = 0 ;
        int n = nums.size();
        int high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = (high + low)/2;
            if(nums[mid] == target){
    ans = mid;
    high = mid - 1;
}
else if(nums[mid] < target){
    low = mid + 1;
}
else{
    high = mid - 1;
}
        }
        return ans;
    }
    int lastNo(vector<int>&nums , int target){
        int low = 0 ;
        int n = nums.size();
        int high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = (high + low)/2;
            if(nums[mid] == target){
                ans = mid;
                low = mid +1;
            }
            else if(nums[mid]<target){
                low = mid +1;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
    int first = firstNo(nums, target);
    if(first == -1){
        return {-1,-1};
    }
    int last = lastNo(nums,target);

    return {first ,last};
    }
};