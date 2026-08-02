class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        //first brute force
        int len=1;
        vector<int>dp(n,1);
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j] > nums[i]){
                    dp[j]=max(dp[j],1+dp[i]);
                }
                else if( j-1 != i && nums[j] > nums[j-1]){
                    dp[j]=max(dp[j],1+dp[j-1]);
                }
                len=max(len,dp[j]);
            }
        }
        len=max(len,dp[n-1]);
        
        return len;
    }
};
