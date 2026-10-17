class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector <string> words;
        string word;
        while(ss>> word){
            words.push_back(word);
        }
        int n = words.size();
        word="";
        for(int i = n-1; i>=0; i--){
           word.append(words[i]);
           if(i>0) word.append(" ");
        }
       return word;
    }
};