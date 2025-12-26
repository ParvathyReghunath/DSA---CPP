Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string a=strs[0];
        string b=strs[n-1];
        string ans="";
        for(int i=0;i<min(strs[0].size(),strs[n-1].size());i++){
                if(a[i]!=b[i]){
                    return ans;
                }
                else{
                    ans+=a[i];
                }
        }
        return ans;
    }
};