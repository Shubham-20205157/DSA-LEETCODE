class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // so for each product we have to consider
        int n = nums.size();
        int ans = INT_MIN;
        int pro = 1;
        for(int i = 0;i<n;i++){
            pro = pro* nums[i];
            ans = max(ans,pro);
            if(pro == 0){
                pro = 1;
            }
        }
        pro = 1;
        for(int i = n-1;i>=0;i--){
            pro = pro* nums[i];
            ans = max(ans,pro);
            if(pro == 0){
                pro = 1;
            }
        }
        return ans;
    }
};