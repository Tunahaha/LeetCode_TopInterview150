class Solution {
public:
    int calculate(string s) {
        int sign = 1, operand = 0;
        int res = 0;
        stack<int> stack;

        for(char ch: s) {
            if(ch >= '0' && ch <= '9') {
                operand = operand * 10 + (ch - '0');
            }
            else if(ch == '+') {
                res += sign * operand;
                sign = 1;
                operand = 0;
            }
            else if(ch == '-') {
                res += sign * operand;
                sign = -1;
                operand = 0;
            }
            else if(ch == '(') {
                stack.push(res);
                stack.push(sign);
                sign = 1;
                res = 0;
            }
            else if(ch == ')') {
                res += sign * operand;
                res *= stack.top();
                stack.pop();
                res += stack.top();
                stack.pop();
                operand = 0;
            }
        }
        return res + sign * operand;
    }
};