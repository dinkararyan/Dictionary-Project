#include "../header/tries.h"

#define ALPHABETS 26

using namespace std;

/*
 * @brief - struct to help build the node.
*/
struct TrieNode
{
    struct TrieNode *child[ALPHABETS];
    bool isEndOfWord;
};
/*
 * @brief        - Function to create a node.
 * argument(s)   - void
 * return value  - node of type struct TrieNode.
*/
struct TrieNode *getNode(void)
{
    struct TrieNode *current = new TrieNode();
    bool isEndOfWord = false;
    for(int i=0; i<ALPHABETS; i++)
    {
        current->child[i] = NULL;
    }
}
/*
 * @brief        - Function to insert a word into the tree. If word already present, the function will mark the boolean variable indicating the node to be the end of a word.
 * argument(s)   - rootNode of the tree, string containing the word to be inserted.
 * return value  - void.
*/
void insert(struct TrieNode *root, string word)
{
    struct TrieNode *current = root;
    word = to_lowercase(word);
    for(int i=0;i<word.length();i++)
    {
        /* get the index of the character by subtracting it to 'a'.
         * if the node is not present create the node using getNode() function.
         * in node is present, make the current node point to child node.
        */
        int index_of_character = word[i] - 'a';
        if(!current->child[index_of_character])
        {
            current->child[index_of_character] = getNode();
        }
        current = current->child[index_of_character];
    }
    //once the loop is over, mark the current node as the endofWord.
    current->isEndOfWord = true;
}
/*
 * @brief        - Function to search for a string.
 * argument(s)   - rootNode of the tree, word to be searched.
 * return value  - bool.
*/
bool search_word(struct TrieNode* root, string word)
{
    struct TrieNode* current = root;
    word = to_lowercase(word);
    for(int i=0;i<word.length();i++)
    {
        int index_of_character = word[i] - 'a';
        if(!current->child[index_of_character])
        {
            return false;
        }
        current = current->child[index_of_character];
    }
    if(current->isEndOfWord == true)
        return true;
    return false;
}
/*
 * @brief        - Function to search for all the words that have the given prefix.
 * argument(s)   - rootNode of the tree, prefix to be searched.
 * return value  - string containing all the words with the prefix.
*/
std::vector<std::string> search_prefix(struct TrieNode* root, string prefix)
{
    struct TrieNode* current = root;
    std::vector<std::string> result;
    prefix = to_lowercase(prefix);
    string constructed = "";
    for(int i=0;i<prefix.length();i++)
    {
        constructed.append(string(1,prefix[i]));
        int index_of_character = prefix[i] - 'a';
        if(current->child[index_of_character] && current->isEndOfWord == true)
        {
            result.push_back(constructed);

        }
        else if(!current->child[index_of_character])
        {
            if(current->isEndOfWord == true)
                result.push_back(constructed);
            break;
        }
        current = current->child[index_of_character];
    }
    return result;
}
