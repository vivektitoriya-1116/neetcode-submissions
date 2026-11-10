class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> t;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
            t.push_back(tolower(s[i]));
            } 
            }
         int i=0;
        int j=t.size()-1;
        while(j>i){
            if(t[i]!=t[j]){
                return false;
            }
           i++;
           j--;
        }
        return true;
    }
};
