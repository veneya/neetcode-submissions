class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int lmx=0;
        int rmx=0;
        int ans=0;
        while(l<r){
            lmx=max(height[l],lmx);
            rmx=max(height[r],rmx);
            if(lmx<rmx){
                ans+=lmx-height[l];
                l++;
            }
            else{
                ans+=rmx-height[r];
                r--;
            }
        }
        return ans;
    }
};
