

/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string ""

Input: strs = ["flower","flow","flight"]
Output: "fl"

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();
        std::string res="";

        if(n==0)
            return "";
        if(n==1)
            return strs[0];
        else
        {
            int min=10000;
            // finding length of the smallest string in the vector
            for(int i=0; i< n; ++i)
            {
                    int len = strs[i].length();
                    if(len < min)
                        min=len;
            }

            // running this loop for smallest string length
            for(int i=0; i<min; ++i)
            {
                char ch = strs[0][i];
                // running this loop for all strings in the vector
                for(int j=1; j<n; ++j)
                {
                    if(ch != strs[j][i])
                        return res;        // if next character does not match, return the character whatever matched till now
                }
                res+=ch;   // character matched , so add it to the final string
            }
           
        }
       return res;
    }
};
