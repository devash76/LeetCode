class Solution {
public:
    int numberofones(int k){
        int count=0;
        while(k!=0){
            count++;
            k=k&(k-1);
        }
        return count;
    }
    
    vector<int> countBits(int n) {
        vector<int> bits;
        int b;
        for(int i=0;i<=n;i++){
            b=numberofones(i);
            bits.push_back(b);
        }
        return bits;
    }
};