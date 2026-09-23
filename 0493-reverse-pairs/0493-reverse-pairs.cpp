class Solution {
public:
    void merge(vector <int> &arr , int low , int mid , int high){
        vector <int> temp;
        int i = low , j = mid+1;
        int k = low;
        while(i<= mid && j <= high){
            if (arr[i]>= arr[j]){
                temp.push_back(arr[j]);
                j++;
            }
            else{
                temp.push_back(arr[i]);
                i++;
            }
        }
        while(i<= mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j <= high){
            temp.push_back(arr[j]);
            j++;
        }

        for(int m = low ; m<= high; m++){
            arr[m] = temp [m - low];
        }
    }

    int countReversePairs(vector<int> &arr , int low , int mid , int high){
        int cnt = 0;
        int right = mid+1;
        for (int i = low ; i <= mid ; i++){
            while( right <= high && arr[i] > 2LL * arr[right])
                right ++;
                cnt = cnt + (right - (mid+1));
        }
        return cnt ;
    }

    int mergeSort(vector <int> &arr , int low , int high){
         int cnt = 0;
        if(low >= high) return cnt;
        int mid = (low+ high)/2;
        cnt += mergeSort(arr , low , mid);
        cnt += mergeSort(arr , mid +1, high);
        cnt += countReversePairs(arr , low , mid ,high);
        merge(arr ,low , mid , high);
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size()-1;
        int count = mergeSort(nums ,0 , n);
        return count;
    }
};