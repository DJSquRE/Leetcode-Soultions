class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long prefix=0;
        long long maxsum=0;
        int n=nums.size();
        unordered_map<int,int> check;
        int left=0;

        for(int right=0;right<n;right++){
            prefix+=nums[right];
            check[nums[right]]++;

            while((right-left+1>k)|| check[nums[right]]>1){
                prefix-=nums[left];
                check[nums[left]]--;
               
                left++;
            }
            if(right-left+1==k){
                maxsum=max(maxsum,prefix);
            }
        }
        return maxsum;
    }
};