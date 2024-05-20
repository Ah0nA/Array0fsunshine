#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> shuffle(std::vector<int> &nums, int n)
    {

        std::vector<int> firstHalf(nums.begin(), nums.begin() + n);
        std::vector<int> secondHalf(nums.begin() + n, nums.end());

        std::vector<int> output;

        for (int i = 0; i < n; i++)
        {
            output.push_back(firstHalf[i]);
            output.push_back(secondHalf[i]);
        }
        return output;
    }
};

// Interesting solution encountered
class Solution
{
public:
    std::vector<int> shuffle(std::vector<int> &nums, int n) {
        std::vector<int> firstHalf;
        std::vector<int> secondHalf;
        std::vector<int> output;

        for(int i =0; i < n; i++){
            firstHalf.push_back(nums[i]);
        }
        for(int i =0; i < 2 * n; i++){
            firstHalf.push_back(nums[i]);
        }
        for (int i = 0; i < n; i++)
        {
            output.push_back(firstHalf[i]);
            output.push_back(secondHalf[i]);
        }
        return output;
    }
};