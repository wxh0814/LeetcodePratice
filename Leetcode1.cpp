//
// Created by wxh on 2021/6/4.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int i,j;
        for(i=0;i<nums.size()-1;i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    return {i,j};
                }
            }
        }
        return {i,j};
    }
};
int main()
{
    Solution solution;
    int target = 5;
    vector<int> nums = {1, 2, 3};
    vector<int> ans = solution.twoSum(nums, target);
    for (auto iter = ans.begin(); iter != ans.end(); ++iter) {
        cout << *iter << endl;
    }
}