class Solution {
public:
    bool isValid(string s) {
        map<char,char> parentheses_pairs = {{')','('},{']','['},{'}','{'}};
        stack<char> stack;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stack.push(s[i]);
            }
            else{
                if(stack.empty() || parentheses_pairs[s[i]] != stack.top()){
                    return false;
                }
                stack.pop();
            }
        }
        return stack.empty();
    }
};