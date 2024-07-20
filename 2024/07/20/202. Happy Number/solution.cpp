class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> myset;
        while (n!=1 && myset.find(n)==myset.end()){
            myset.insert(n);
            n=help(n);
        }
        return n==1;
    }

private:
    int help(int n){
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
};