#include "../header/utility.h"
#include<iostream>

using namespace std;

/*
 * @brief        - Function to convert string to all lowercase.
 * argument(s)   - string
 * return value  - string.
*/
string to_lowercase(string word)
{
    string res = "";
    for(int i=0;i<word.length();i++)
    {
        int index = (int)word[i];
        if(index>=65 && index<=90)
        {
            index = index + 32;
            char ch = char(index);
            res.append(string(1,ch));
        }
        else if(index>=97 && index<=122)
        {
        res.append(string(1,word[i]));
        }
        else
            continue;
    }
    return res;
}
/*
 * @brief        - Function to fetch words from a file.
 * argument(s)   - filename
 * return value  - vector containing all the words.
*/
std::vector<std::string> readfile(string filename)
{
    std::vector<std::string> list_of_words;
    string word = "";
    std::fstream file;
    file.open(filename.c_str());
    while(file >> word)
    {
        list_of_words.push_back(word);
        word="";
    }
    return list_of_words;
}
