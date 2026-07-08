#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> parent;
        for (const string &s : strs)
        {
            string temp = s;
            sort(temp.begin(),temp.end());
            parent[temp].push_back(s);
        }
        vector<vector<string>> final;
        for(auto &list : parent)
        {
            final.push_back(list.second);
        }

        return final;
    }
};
