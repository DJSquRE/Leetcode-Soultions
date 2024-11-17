class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,bool> count;
        vector<int> output;
        for(auto num:nums){
            count[num]=true;
        }
        for(int i=1;i<=nums.size();i++){
            if(!count[i]) output.push_back(i);
        }
        return output;
    }
};