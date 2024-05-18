#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    int maximumWealth(std::vector<std::vector<int>> &accounts)
    {
        std::vector<int> wealth;
        int sum;

        for (int i = 0; i < accounts.size(); i++)
        {
            sum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];
            }
            wealth.push_back(sum);
        }

        int largest = wealth[0];

        for (int i = 1; i < wealth.size(); i++)
        {
            if (wealth[i] > largest)
            {
                largest = wealth[i];
            }
        }
        return largest;
    }
};

// Intersting solution using std::max()

class Solution
{
public:
    int maximumWealth(std::vector<std::vector<int>> &accounts)
    {
        int maximum = 0;
        int sum = 0;
        int n = accounts.size();
        int m = accounts[0].size();

        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += accounts[i][j];
            }
            maximum = std::max(maximum, sum);
        }
        return maximum;
    }
};
