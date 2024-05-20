#include <iostream>
#include <vector>

class Solution
{
public:
    std::vector<int> getConcatenation(std::vector<int> &nums)
    {
        int numsLength = nums.size();

        std::vector<int> ans;

        for(int i = 0; i< numsLength; i++){
            ans.push_back(nums[i]);
        }
        for(int i = 0; i< numsLength; i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};



//Interesting solution encountered
class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        std::vector<int> ans(nums);//initialize ans with elements of nums

        for(int i=0; i < nums.size(); i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};