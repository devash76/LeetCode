class Solution {
public:
     void reverse(vector<char> &v,int i,int j){
            if(i>j){
                return ;
            }else{
                swap(v[i],v[j]);
                i++;
                j--;
                reverse(v,i,j);
            }
        }

        void reverseString(vector<char>& s) {
            reverse(s,0,s.size()-1);
        }
};