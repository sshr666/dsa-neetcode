class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1,right=1;
        vector<int> fin;
        for (int i = 0; i < nums.size(); i++)
        {
            fin.push_back(left);
            left*=nums[i];
        }
        for (int i = nums.size()-1; i >=0; i--)
        {
            fin[i]*=right;
            right*=nums[i];
        }
        
        return fin;
        
    }
};