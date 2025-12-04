class Solution {
public:
    int longestValidParentheses(string s) {

        int cnt = 0;
        Queue <int> q;
        stack <char> stack;
        for (auto c : s)
        {
            if (c == '(') stack.push(c);
            else if (!stack.empty())
            {
                if (c != stack.top())
                {
                    stack.pop();
                    cnt += 2;
                }
            }
        }
        return cnt;

    }
};