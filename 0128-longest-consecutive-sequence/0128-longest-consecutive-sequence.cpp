class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> st(nums.begin(),nums.end());
        int longest = 0;
        for(auto num : st){
            int currNum = num;
            int count =1;
            if(st.find(num - 1) == st.end()){
            while(st.find(currNum+1) != st.end()){
                count++;
                currNum++;
               
            }
             longest = max(longest, count);
            }
        }
        return longest;
    }
};