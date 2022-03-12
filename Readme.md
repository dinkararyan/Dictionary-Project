<h1>Dictionary Search</h1>

<br> --> Like in dictionary where we search for a word letter by letter, first looking at the first letter of the word and then going to the particular section and then searching for the second word in similar fashion.<br>
 --> This search method using tries data structure attempts to do the same.<br>
 --> The data structure is first created by reading the file word by word and then inserting each letter into the tree.<br>
 --> The tree keeps a track of each word by marking the last character of the word.<br>
 --> While seaching for a string, the tries data structure just have to traverse downwards from the root node.<br>
 --> If all the character of the search string are present and the current node (where the traversal has ended) is marked to depict end of the word, then we can mark the word as found.<br>

<h4> Prefix matching is still in developement and will be merged to the code in some future commits.</h4>

### For learing more about tries data structure follow the link

<a href="https://www.geeksforgeeks.org/trie-insert-and-search/" target="blank"><img src="https://img.shields.io/badge/-https%3A%2F%2Fwww.geeksforgeeks.org%2Ftrie--insert--and--search%2F-brightgreen" /></a>


### <span>&#9888;</span>IGNORE THE OLD DICTIONARY PROJECT AND DICTIONARY README.
