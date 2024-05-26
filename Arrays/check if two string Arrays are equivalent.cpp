#include <vector>
#include <string>

class Solution
{
public:
    bool arrayStringsAreEqual(std::vector<std::string> &word1, std::vector<std::string> &word2)
    {
        std::string concatenatedWord1;
        std::string concatenatedWord2;

        for(std::string word: word1){
            concatenatedWord1 += word;
        }
        for(std::string word: word2){
            concatenatedWord2 += word;
        }

        return concatenatedWord1 == concatenatedWord2;

    }
};




    
