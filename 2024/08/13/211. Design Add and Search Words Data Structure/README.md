# 211. Design Add and Search Words Data Structure
- Difficulty: Medium
- Language: C++, Python
- Runtime: 1233ms
- Faster than: 10.31% of submissions

#### Problem Description
Design a data structure that supports adding new words and finding if a string matches any previously added string.

Implement the `WordDictionary` class:
* `WordDictionary()` Initializes the object.
* `void addWord(word)` Adds `word` to the data structure, it can be matched later.
* `bool search(word)` Returns `true` if there is any string in the data structure that matches `word` or `false` otherwise. `word` may contain dots `'.'` where dots can be matched with any letter.