class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
            unsigned long long int reverse=0;
            int rem;
            int temp =x;
            while(temp){
                rem=temp%10;
                reverse= reverse*10 + rem;
                temp=temp/10;
                
            }
            if(reverse==x){
                return true;
            }
            else{
                return false;
            }
        }
    }
};