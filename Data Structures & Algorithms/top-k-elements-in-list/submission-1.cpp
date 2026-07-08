#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for (int i : nums)
        {
            m[i]++;
        }

        vector<pair<int,int>> v;
        for(auto &p : m)
        {
            v.push_back({p.second, p.first});

        }
        sort(v.rbegin(),v.rend());

        vector<int> final;
        for (int i = 0; i < k; i++)
        {
            final.push_back(v[i].second);
        }
        
        return final;
        
    }
};

