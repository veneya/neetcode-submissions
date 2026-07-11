class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        for(int i=0;i<=nums.size()-k;i++){
            int large=nums[i];
            for(int j=i;j<k+i;j++){
                if(nums[j]>large){
                    large=nums[j];
                }
            }
            ans.push_back(large);
        }
        return ans;
    }
};
