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


//Interesting solution.
class Solution
{
public:
    bool arrayStringsAreEqual(std::vector<std::string> &word1, std::vector<std::string> &word2)
    {
        int i = 0 , j = 0;

        while(i < word1.size() && j < word2.size()){
            if(word1[i] != word2[j]){
                return false;
            }
            i++;
            j++;
        }
        return i == word1.size() && j == word2.size();

    }
};
    
