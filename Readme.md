<h1>Dictionary Search</h1>

<br> --> Like in dictionary where we search for a word letter by letter, first looking at the first letter of the word and then going to the particular section and then searching for the second word in similar fashion.<br>
 --> This search method using tries data structure attempts to do the same.<br>
 --> The data structure is first created by reading the file word by word and then inserting each letter into the tree.<br>
 --> The tree keeps a track of each word by marking the last character of the word.<br>
 --> While seaching for a string, the tries data structure just have to traverse downwards from the root node.<br>
 --> If all the character of the search string are present and the current node (where the traversal has ended) is marked to depict end of the word, then we can mark the word as found.<br>
 
 ### For learing more about tries data structure follow the link

<a href="https://www.geeksforgeeks.org/trie-insert-and-search/" target="blank"><img src="https://img.shields.io/badge/-https%3A%2F%2Fwww.geeksforgeeks.org%2Ftrie--insert--and--search%2F-brightgreen" /></a><br><br>

### <span>&#9881;</span> For building the project in you local system.

<span>&#10112;</span> data directory     - contains the sample data used for testing the project.<br>
<span>&#10113;</span> header directory   - contains all the neccesary headers for the project.<br>
<span>&#10114;</span> source directory   - cotains the source code.<br>
<span>&#10115;</span> Create a makefile and link the header files and source file in order to build the project on gcc.<br>
<span>&#10033;</span> I have used CodeBlocks IDE while the development of this project and have made available the CBP file in this repository.<br>

### <span>&#9888;</span>IGNORE THE OLD DICTIONARY PROJECT AND DICTIONARY README.
<h4> Prefix matching is still in developement and will be merged to the code in some future commits.</h4>




