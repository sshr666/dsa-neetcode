#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0, r= heights.size()-1;
        int m = min(heights[l],heights[r])*(r-l);

        while (l<r)
        {
            int temp = vol(heights, l, r);
            m = max(m, temp);

            if(heights[l]<=heights[r])
                l++;
            
            else
                r--;
            
        }
        return m;
    }

    int vol(vector<int>& heights, int l, int r)
    {
        return min(heights[l],heights[r])*(r-l);
    }
};
