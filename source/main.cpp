#include <iostream>
#include "../header/tries.h"
#include "../header/utility.h"

#define MATCH_WHOLE_STRING  1
#define MATHC_PREFIX        2

using namespace std;

int main(int argc, char **argv)
{
    // Reading the words from the file and building the tree.
    string filename = argv[1];
    std::vector<std::string> list_of_words = readfile(filename);
    int total_words = list_of_words.size();
    cout<<"Number of word in the document = "<<total_words<<endl;
    struct TrieNode *root = getNode();
    for(int it=0;it<total_words;it++)
    {
        insert(root,list_of_words[it]);
    }
    cout.clear();
    //Searching begins here.
    bool searching = true;
    while(searching)
    {
        string continue_searching;
        int user_choice;
        cout<<"Efficient Prefix Matching Method."<<endl;
        cout<<"Enter you choice :\n";
        cout<<"1: Match whole word.\n2: Match prefix.\n";
        cin>>user_choice;
        string string_to_match;
        std::vector<std::string> matches;
        switch(user_choice)
        {
            case MATCH_WHOLE_STRING:
                cout<<"Enter the word you want to look for..\n";
                cin>>string_to_match;
                if(search_word(root,string_to_match))
                    cout<<"Word Present!\n\n";
                else
                    cout<<"Word Not Present!\n\n";
                break;
            case MATHC_PREFIX:
                // Need to add appropriate check for prefix.
                cout<<" Algorithm need improvements to enable searching the prefix correctly. "<<endl;
                cout<<" Please choose the other option\n";
                break;
                // enable prefix search option once change has been done.
                cout<<"Enter the prefix you want to look for..\n";
                cin>>string_to_match;
                matches = search_prefix(root,string_to_match);
                if(matches.size() == 0)
                    cout<<"No match found for the give prefix!"<<endl;
                else
                {
                    for(int i=0;i<matches.size();i++)
                        cout<<matches[i]<<"\t";
                    cout<<endl;
                }
                break;
            default:
                cout<<"Wrong input, please choose either 1 or 2\n";
                cin.clear();
                cin.ignore(100, '\n');
                continue;
        }
        cout<<"Do you want to search another string ? Y/N";
        cin>>continue_searching;
        continue_searching = to_lowercase(continue_searching);
        if(continue_searching != "y")
            searching = false;
    }
    cout<<"Program Terminating...";
    return 0;
}
