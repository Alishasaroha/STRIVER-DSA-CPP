class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ctr = 0;
        int element;
        for(int i =0 ;i<nums.size(); i++){
            if(ctr == 0){
                ctr =1;
                element = nums[i];
            }
            else if( nums[i] == element) ctr ++;
            else ctr--;
        }
        int count = 0;
        for (int i = 0; i<nums.size(); i++){
            if( nums[i]== element) count++;
        }
       
        if(count > (nums.size())/2){ return element;}
        return -1;
    }
};