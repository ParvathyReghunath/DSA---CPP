2 Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp={{')','('},{'}','{'},{']','['}};
        for(char c:s){
            if(mp.count(c)){
                if(st.empty() || mp[c]!=st.top()){
                    return false;

                }
            st.pop();
            }
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};