#include<iostream>
#include<vector>
#include<bits/stdc++.h>

/*
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].

*/

using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

			int index = digits.size() - 1;  // index pointing to the last element
			
			while(index>=0)
			{
					if(digits[index]== 9)         // * 9
						digits[index]=0;
					else if(digits[index] != 9)   // 1 2 3 4
					{
						digits[index] = digits[index] +1;
						return digits;
 					}
 					index--;
			}
			digits.insert(digits.begin(),1);									// 9 9 9 so prepending 1
			return digits;
        
    }
};
	
    int main()
		{

			Solution s1;
			vector<int> v= {9};

			vector<int> v1 = s1.plusOne(v);
			
			for(auto i: v1)
				cout<<i<<" ";

      return 0 ;
    }
