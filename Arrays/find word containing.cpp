#include <vector>
#include <string>

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> indices;

        for(int i = 0; i < words.size(); i++){
            if(words[i].find(x) != std::string::npos){
                indices.push_back(i);
            }
        }
        return indices;
    }
};



//Interesting solution 

class Solution {
public:
    std::vector<int> findWordsContaining(std::vector<std::string>& words, char x) {
        std::vector<int> indices;

        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                if(words[i][j] == x){
                    indices.push_back(i);
                    break;
                }
            }
        }
        return indices;
    }
};