#include<iostream>
#include<vector>
#include<bits/stdc++.h>

/*
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.


Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.
*/

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s)
		{
				int i= s.length()-1;
				int count =0;
				int flag=false;
				
				while(i >=0)
				{
					if( (s[i] <= 'Z' && s[i] >= 'A') || (s[i] <= 'z' && s[i] >= 'a') )
					{
							count++;
							flag=true;
					}
					else
					{
							if(flag==true)      // come here when all last word characters are done , so flag will be true..so return count
									return count;
					}
					i--;
				}
				return count;
    }
};

	
    int main()
		{

			Solution s1;
			string s="   fly me   to   the moon  ";

			cout<<s1.lengthOfLastWord(s)<<" ";

      return 0 ;
    }
