#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1;
        vector<int> newArray;

        // sort array
        sort(nums.begin(), nums.end());
        while (start < end)
        {
            int sum = nums[start] + nums[end];
            if (sum == target)
            {
                newArray.push_back(start);
                newArray.push_back(end);
                return newArray;
            }
            if (sum < target)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return newArray;
    }
};