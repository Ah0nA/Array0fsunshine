#include <vector>
#include <iostream>

class Solution
{
public:
    std::vector<int> runningSum(std::vector<int> &nums)
    {
        std::vector<int> runSum;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            runSum.push_back(sum);
        }
        return runSum;
    }
};

// Interesting Solution Encountered
class Solution
{
public:
    std::vector<int> runningSum(std::vector<int> &nums)
    {
        // Initialzed size of runSum with size of nums array
        std::vector<int> runSum(nums.size());
        // Initialize first element of runSum with the first element of nums
        runSum[0] = nums[0];

        // Iterate through remaining elements
        for (int i = 1; i < nums.size(); i++)
        {
            runSum[i] = runSum[i - 1] + nums[i];
        }
        return runSum;
    }
};