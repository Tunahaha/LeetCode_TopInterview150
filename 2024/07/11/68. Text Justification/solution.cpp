class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res, cur_words;
        int cur_len = 0;
        for (string word : words) {
            if (cur_len + word.length() + cur_words.size() > maxWidth) {
                int total_spaces = maxWidth - cur_len;
                int gaps = cur_words.size() - 1;
                if (gaps == 0) {
                    res.push_back(cur_words[0] + string(total_spaces, ' '));
                } else {
                    int space_per_gap = total_spaces / gaps;
                    int extra_spaces = total_spaces % gaps;
                    string line = "";
                    for (int i = 0; i < cur_words.size(); ++i) {
                        line += cur_words[i];
                        if (i < gaps) {
                            line += string(space_per_gap, ' ');
                            if (i < extra_spaces) {
                                line += ' ';
                            }
                        }
                    }
                    res.push_back(line);
                }
                cur_words.clear();
                cur_len = 0;
            }
            cur_words.push_back(word);
            cur_len += word.length();
        }

        string last_line = "";
        for (const string& word : cur_words) {
            if (!last_line.empty()) {
                last_line += ' ';
            }
            last_line += word;
        }
        last_line += string(maxWidth - last_line.length(), ' ');
        res.push_back(last_line);

        return res;
    }
};