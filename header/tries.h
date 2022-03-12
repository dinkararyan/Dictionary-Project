#ifndef TRIES_H_INCLUDED
#define TRIES_H_INCLUDED

#include <string.h>
#include <vector>
#include "utility.h"

using namespace std;

struct TrieNode *getNode(void);
void insert(struct TrieNode* , string);
bool search_word(struct TrieNode* , string);
std::vector<std::string> search_prefix(struct TrieNode* , string);

#endif // TRIES_H_INCLUDED
