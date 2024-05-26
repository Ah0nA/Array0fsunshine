#include <vector>

class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int> &hours, int target)
    {
        std::vector<int> employees;

        for (int i = 0; i < hours.size(); i++)
        {
            if (hours[i] >= target)
            {
                employees.push_back(i);
            }
        }
        return employees.size();
    }
};

class Solution
{
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int> &hours, int target)
    {
        int count = 0;

        for (int i = 0; i < hours.size(); i++)
        {
            if (hours[i] >= target)
            {
                count++;
            }
        }
        return count;
    }
};