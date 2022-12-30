/* Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2, , ]

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3, , , ]

*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        std::vector<int>::iterator it = nums.begin();

       while(it != nums.end())      
        {
            if(*it == val)         //if number to remove matches
            {
                nums.erase(it);    // matched element removed from vector, so decrement the iterator to previous element
                it--;                  
            }
           it++;     // number did not match, so increment iterator to point to the next element
        }
        return nums.size();
    }
};
