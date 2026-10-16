class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map< char,int> smap;
        if(s.size()!= t.size()) return false;
        for(char ch:s){
            smap[ch]++;
        }
        for(char ch:t){
            smap[ch]--;
        }
        for(auto it:smap){
           if(it.second !=0) return false;
        }
        return true;
    }
};