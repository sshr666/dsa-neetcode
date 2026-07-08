#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a=0, b=numbers.size()-1;
        while(a<b)
        {
            if(numbers[a]+numbers[b]==target)
                return {++a,++b};

            if(numbers[a]+numbers[b]>target)
            {
                b--;
                continue;
            }

            if(numbers[a]+numbers[b]<target)
            {
                a++;
                continue;
            }
            a++;
            b--;

        }
        return {0,0};
    }
};
