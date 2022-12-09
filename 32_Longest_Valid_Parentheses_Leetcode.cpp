class Solution {
public:
    int longestValidParentheses(string s) {
        int m=0;
        stack<int>stk;
        stk.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]==')'){
                stk.pop();  
                if(stk.empty()){
                    stk.push(i);
                }
                else{
                    
                    m=max(m,i-stk.top());
                }
            }
            else{
                stk.push(i);
            }
        }
        return m;
        
    }
};