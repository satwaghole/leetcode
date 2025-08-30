#include <bits/stdc++.h>

using namespace std;

/*
	Given an array arr[] of integers, determine the Next Greater Element (NGE) for every element in the array, maintaining the order of appearance.

The Next Greater Element for an element x is defined as the first element to the right of x in the array that is strictly greater than x.
If no such element exists for an element, its Next Greater Element is -1.
Examples: 

Input: arr[] = [1, 3, 2, 4]
Output: [3, 4, 4, -1]
Explanation: The next larger element to 1 is 3, 3 is 4, 2 is 4 and for 4, since it doesn't exist, it is -1.

Input: arr[] = [6, 8, 0, 1, 3]
Output: [8, -1, 1, 3, -1]
Explanation: The next larger element to 6 is 8, for 8 there is no larger elements hence it is -1, for 0 it is 1 , for 1 it is 3 and then for 3 there is no larger element on right and hence -1.

Input: arr[] = [50, 40, 30, 10]
Output: [-1, -1, -1, -1]
Explanation: There is no greater element for any of the elements in the array, so all are -1.
*/


class Solution {
  public:
  	
  	// brute force approach with TC(n^2)
  	
 /*   vector<int> nextLargerElement(vector<int>& arr) 
	{
        // code here
        int size = arr.size();
        vector<int> nge(size,-1);
        
        for(int i=0;i<arr.size();i++)
        {
        	for(int j=i+1;j<arr.size();j++)
        	{
        		if(arr[j]>arr[i])
        		{
        			int temp=arr[j];
        			nge[i]=(temp);
        			break;
        		}
			}
		}
        
        return nge;
    }
*/
	
	//Monotonic stack approach - TC(2N)
	vector<int> nextLargerElement(vector<int>& arr) 
	{
        // code here
        
        std::stack<int> st;
        int arr_size = arr.size();
        
        std::vector<int> nge(arr_size,-1);
        
        for(int i=arr_size-1; i>=0;i--)
        {
        	
        	while(!st.empty() && (st.top() <= arr[i]))
        		st.pop();
        		
        	if(st.empty())
				 nge[i]=-1;
        	else
        		nge[i]=st.top();
        		
        	st.push(arr[i]);
		}
        
        return nge;
	}

};

int main()
{
	Solution *s1=new Solution();
	
	std::vector<int> nums2={4,12,5,3,1,2,5,3,1,2,4,6};
	std::vector<int> nums1=s1->nextLargerElement(nums2);
	
	for(const auto it: nums1)
        cout<<" "<<it<<" ";
	
	delete s1;
}
