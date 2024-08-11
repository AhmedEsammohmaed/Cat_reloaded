#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; //pointer to last element in nums1(consider 3 item)
        int j = n - 1; // poitner to last element in nums2
        int k = m + n - 1; // pointer to last element in nums1 which is final merge

        while (i>=0 && j>=0 )
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k--] = nums1[i--];
            }
            else
                nums1[k--] = nums2[j--];
        }
        while (j >= 0)
        {
            nums1[k--] = nums2[j--];
        }
        }
    void print(const vector<int>& nums1)const {
        for (int num : nums1)
            cout << num << " ";
    }
};
int main()
{
    Solution s;
    vector<int> nums1{ 1,2,3,0,0,0 };
    vector<int> nums2{ 2,5,6 };
    s.merge(nums1, 3, nums2, 3);
    s.print(nums1);
}
