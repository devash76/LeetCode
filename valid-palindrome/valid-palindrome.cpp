class Solution {
public:
    bool isPalindrome(string s) {
        int cnt=0;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                temp+=(tolower(s[i]));
            }
        }
        
        int n= temp.size();
        for(int i=0;i<n/2;i++){
            if(temp[i]!=temp[n-1-i]){
                return false;
            }
                
        }
               return true;
    }
};