class Solution {
public:
    string intToRoman(int num) {
        string res="";
        vector<pair<int, string>> roman_table = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
        for (int i=0;i<roman_table.size();i++){
            while(num>=roman_table[i].first){
                res+=roman_table[i].second;
                num-=roman_table[i].first;
            }
        }
        return res;
    }
};