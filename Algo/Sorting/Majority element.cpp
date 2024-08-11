#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = findcandidate(nums);
        return candidate;
    }
private:
    int findcandidate(vector<int>& nums)
    {
        int candidate = nums[0];
        int counter = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == candidate)
            {
                counter++;
            }
            else
                counter--;
            if (counter == 0)
            {
                candidate=nums[i];
                counter = 1;
            }
        }
        return candidate;
    }
};

int main()
{
    Solution s;
    vector<int>nums = {3, 2, 3};
    cout<<s.majorityElement(nums);
    vector<int>nums1 = { 2,2,1,1,1,2,2 };
     cout<<s.majorityElement(nums1);
}