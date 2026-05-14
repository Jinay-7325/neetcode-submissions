class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> post(n);
        vector<int> ans(n);
        int pree = 1;
        for(int i=0;i<nums.size();i++)
        {
            pre[i]=pree;
            pree = pree * nums[i];
        }

        int postt = 1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            post[i]=postt;
            postt = postt * nums[i];
        }

        for(int i=0;i<n;i++)
        {
            ans[i]=pre[i]*post[i];
        }

        return ans;
    }
};
