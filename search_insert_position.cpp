#include<iostream>
#include<vector>
#include<bits/stdc++.h>

/*
Input: nums = [1,3,5,6], target = 5
Output: 2

Input: nums = [1,3,5,6], target = 2
Output: 1

Input: nums = [1,3,5,6], target = 12
Output: 4

*/

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    	
    	int i=0;
    	while(i< nums.size())
    	{
				 if(nums[i] >= target)
				 {
						return i;
				 }
				 i++;
			}
			return i;
    }
};

	
    int main()
		{

			Solution s1;
			vector<int> v= {1,3,5,9};
			int target=18;

			int temp = s1.searchInsert(v,target);
			
		//	for(auto i: v1)
				cout<<temp<<" ";

      return 0 ;
    }
