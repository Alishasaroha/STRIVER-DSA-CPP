class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n =  strs.size();
        string s = strs[0];
        int m = s.length();
        
        for(int i = 0; i<m ; i++){
            for(int j = 1; j<n ;j++){
                if(i<strs[j].length()){
            if(s[i] != strs[j][i]){
                return s.substr(0,i);
            }
            }
            else{ return s.substr(0,i);}
            }
        }
        return s;
    }
};