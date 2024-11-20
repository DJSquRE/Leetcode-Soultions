class Solution {
private:
    bool selfdivide(int num){
        int no=num;
        while(no>0){
            int digit=no%10;
            if(digit==0 || num%digit!=0) return false;
            no/=10;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> output;

        for(int i=left;i<=right;i++){
            if(selfdivide(i)){
                output.push_back(i);
            }
        }
        return output;
    }
};