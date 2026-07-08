#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> fin;

        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]>0)
                break;
            if(i>0&&nums[i]==nums[i-1])
                continue;

            int l=i+1, r=nums.size()-1;

            while (l<r)
            {
                int sum= nums[l]+nums[i]+nums[r];

                if(sum>0)
                    r--;

                else if(sum<0)
                    l++;

                else
                {
                    fin.push_back({nums[l],nums[i],nums[r]});
                    l++;r--;

                    while (nums[l]==nums[l-1])
                    {
                        l++;
                    }
                    

                }
            }
            
        }
        
        return fin;
    }
};

