class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> result;
        int n=nums.size();
        int maxnum;
        if(n==1) return nums;
    for(int i=0;i<=n-k;i++){
        maxnum=nums[i+k-1];
        for(int j=i;j<i+k-1;j++){
            if(nums[j]!=nums[j+1]-1){
                maxnum=-1;
                break;
            }       
        }
        result.push_back(maxnum);
    }
    return result;
    }
};