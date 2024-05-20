#include <vector>
#include <string>


class Solution
{
public:
    int finalValueAfterOperations(std::vector<std::string> &operations)
    {
        int x = 0;

        

        for (int i = 0; i < operations.size(); i++)
        {
            std::string n = operations[i];
            if (n == "++X" || n == "X++")
            {
                return x ++;
            }
            if (n == "--X" || n == "X--")
            {
                return x --;
            }
        }
        return x;
    }
};