class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> output(n,0);
        if(k==0) return output;

        for(int i=0;i<n;i++){
            int index=i;
            for(int j=1;j<=abs(k);j++){
                    if(k>0){
                        if(index!=n-1) index++;
                        else index=0;
                        }
                    else if(k<0){
                        if(index!=0) index--;
                        else index=n-1;
                    }
                    output[i]+=code[index];   
                }
        }
        return output;
    }
};