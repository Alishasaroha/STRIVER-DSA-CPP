class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0 ;
        int j = n-1;
    while(i<n/2){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    }
};