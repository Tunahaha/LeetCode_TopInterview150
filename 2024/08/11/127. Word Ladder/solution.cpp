class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) 
    {
        unordered_set<string> left;
        unordered_set<string> right;
        unordered_set<string> words(wordList.begin(), wordList.end());

        if (!words.count(endWord))
            return 0;
        else
            words.erase(endWord);

        left.insert(beginWord);
        right.insert(endWord);

        int count = 1;

        while (!left.empty() && !right.empty())
        {
            if (left.size() > right.size())
                swap(left, right);

            unordered_set<string> curr;

            for(string word : left)
            {
                for (int i = 0; i < word.size(); i++)
                {
                    string temp = word;
                    for (char c = 'a'; c <= 'z'; c++)
                    {
                        temp[i] = c;

                        if (right.count(temp))
                            return count + 1;

                        if (!words.count(temp)) 
                            continue;
                        words.erase(temp);
                        curr.insert(temp);
                    }
                }
            }

            left = curr;
            count++;
        }

        return 0;
    }
};