#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) 
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
};

int main()
{
	Solution *s1=new Solution();
	
	std::vector<int> nums2={50, 40, 30, 10};
	std::vector<int> nums1=s1->nextLargerElement(nums2);
	
	for(const auto it: nums1)
        cout<<" "<<it<<" ";
	
	delete s1;
}