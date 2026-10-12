class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0;
        int high= n-1;
        int missingdays;
        while(low<= high){
            int mid = low+ (high-low)/2;
            missingdays = arr[mid] - (mid+1);
            if(missingdays < k) low = mid + 1;
            else high = mid -1;
        }

        return (low+k);
    }
};   