#include<iostream>
#include<vector>
#include<bits/stdc++.h>

/*
Input: nums = [1,1,2]
Output: 2, nums = [1,2, ]

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

*/

using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
				 vector<int> original;

				 for(std::vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
				 {
						 int val = *it;
						 
						 if(std::find(original.begin(), original.end(), val) != original.end())
						 {
								nums.erase(it);
								it--;
						 }
						 else
						 {
								original.push_back(val);
						 }
				 }
        return original.size();
    }
};
	
    int main()
		{

			Solution s1;
			vector<int> v= {1,1,2,2,3,3,4,1};

			cout<<s1.removeDuplicates(v);

      return 0 ;
    }
