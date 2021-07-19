class Solution {
public:
   int lengthOfLastWord(string s) {
    int i = s.length()-1;
    int length = 0;
        for(;i>=0;i--){
            if(s[i]==' ' && length!=0)
                break;    
            else if(s[i]==' ' && length==0) 
                continue; 
            else length++;
        }
        return length;
    }
};