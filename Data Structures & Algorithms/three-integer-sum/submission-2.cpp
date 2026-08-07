class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>final;
        set<vector<int>>s;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1,k=n-1;
            int target=-nums[i];
            while(j<k){
                if(nums[j]+nums[k] == target){
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    s.insert(temp);
                    k--;
                }
                else if(nums[j]+nums[k] < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto x: s){
            final.push_back(x);
        }
        return final;
    }
};
