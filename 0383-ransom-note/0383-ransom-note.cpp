class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        unordered_map<char,int> mpp;
        for(char i : magazine){
            mpp[i]++;
        }
        for(int i = 0; i < n ; i++){
            if(mpp.find(ransomNote[i]) == mpp.end()){
                return false;
            }
            else{
                if(mpp[ransomNote[i]]<1) return false;
                mpp[ransomNote[i]]--;
            }
        }
        return true;
    }
};