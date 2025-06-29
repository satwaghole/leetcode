
#include <bits/stdc++.h>

using namespace std;
/*

Longest substring without repeating characters -- This is non sliding window approach

Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.


Time complexity:-
================
Let n be the length of the input string s.

In the worst case, the inner loop runs up to n times for each i.
The find() operation inside the inner loop takes O(k) time, where k can be up to n.
So, the overall time complexity is:

O(n³) in the worst case.

This is because:

There are O(n²) iterations (nested loops).
Each iteration does a string search which can take up to O(n) time.


What is unordered_set?
It's a hash-based container in C++ that stores unique elements.
It allows for average-case constant time complexity — O(1) — for:
Insertion (insert)
Deletion (erase)
Lookup (find)

✅ Why Use unordered_set in This Problem?
The goal is to find the longest substring without repeating characters, and we need to:

Quickly check if a character is already in the current substring.
Efficiently add new characters.
Remove characters when shrinking the sliding window.
Using unordered_set allows all of these operations to be done in constant time, which is crucial for maintaining the overall O(n) time complexity.

🆚 Why Not Use Other Containers?
Container	Lookup Time	Allows Duplicates?	Ordered?	Suitable?
unordered_set	 O(1)	      		❌ No		❌ No		✅ Yes
set		O(log n)		❌ No		✅ Yes		❌ Slower
vector		O(n)			✅ Yes		❌ No		❌ Too slow
map		O(log n)		❌ No		✅ Yes		❌ Overkill

*/

class Solution {
public:

   // Brute force approach 
    int lengthOfLongestSubstring(string s) 
    {
        int MaxCount=0,count=1;
        string s1;

        for(int i=0; i<s.size();i++)
        {
            s1+=s[i];
            int j;
            for(j=i+1; j<s.size();j++)
            {
                if(s1.find(s[j]) == string::npos) 
                {
                  s1+=s[j];  
                  count++;
                }
                else
                    break; 
            }
            if(count>MaxCount)
                MaxCount=count;
            count=1;
            s1.erase();
        }     
        return MaxCount;
    }

  // sliding window approach   - TC - O(n) time
 int lengthOfLongestSubstring(string s)
	{
       int left=0, right=0, maxLength=0;
       std::unordered_set<char> mySet;
       
       while(right < s.length())
       {
       		if(mySet.find(s[right])==mySet.end())
       		{
       			mySet.insert(s[right]);
       			maxLength = max(maxLength, right-left+1);
       			right++;
			}
			else
			{
				mySet.erase(s[left]);
				left++;
			}
	   }
	   return maxLength;
    }
};

int main()
{
	Solution *s1;	
	cout<<" answer is = "<<s1->lengthOfLongestSubstring("dvdf");	
	return 0;	
}

// 

