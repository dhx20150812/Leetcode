class Solution {
public:
    bool isValid(string s) {
        if(!s.length())
        return true;
        stack<char> stk;
        int len = s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{') //如果是左半部分括号就入栈
                stk.push(s[i]);
            else
            {
                if(stk.empty()) //如果此时栈为空，入栈元素是右半括号，则肯定不合法
                    return false;
                if(s[i]==')'&&stk.top()=='(') //栈顶元素和字符串的当前元素正好满足"()"，则将栈顶元素弹出
                    stk.pop();
                else if(s[i]==']'&&stk.top()=='[')
                    stk.pop();
                else if(s[i]=='}'&&stk.top()=='{')
                    stk.pop();
                else
                    return false;
            }
        }
        return stk.empty();
    }
};
