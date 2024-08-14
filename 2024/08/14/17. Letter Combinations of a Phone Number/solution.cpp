class Solution {
public:
    void backtrack(int index, string path, const string& digits,const unordered_map<char, string>& letters,vector<string>& res) {
        if (path.size() == digits.size()) {
            res.push_back(path);
            return;
        }
        string possibleLetters = letters.at(digits[index]);

        for (char letter : possibleLetters) {
            backtrack(index + 1, path + letter, digits, letters, res);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }
        unordered_map<char, string> digitMapping = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"},
            {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
        };
        vector<string> res;
        backtrack(0, "", digits, digitMapping, res);
        return res;
    }
};