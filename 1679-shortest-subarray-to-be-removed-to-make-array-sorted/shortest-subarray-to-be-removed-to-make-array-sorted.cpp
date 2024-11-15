class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int prefix=0;
        int n=arr.size();
        int suffix=n-1;
        int shortest;
        for(int i=0;i<n-1;i++){
            if(arr[i]<=arr[i+1]) prefix=i+1;
            else break;
        }
        if(prefix==n-1) return 0;
        
        for(int i=n-1;i>0;i--){
            if(arr[i]>=arr[i-1]) suffix=i-1;
            else break;
        }
        
        shortest=min(n-prefix-1,suffix);

        int left=0,right=suffix;
        while(left<=prefix && right<n){
            if(arr[left]<=arr[right]){
                shortest=min(shortest,right-left-1);
                left++;
            }
            else{
                right++;
            }
        }
        return shortest;
    }
};