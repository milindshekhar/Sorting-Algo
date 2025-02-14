class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int j=i;
            while(j>0 && nums[j]<nums[j-1])
            {
                swap(nums[j],nums[j-1]);
                j--;
            }
        }
        return nums;
    }
};

//TC - O(n^2) Worst and Average , O(n) Best
//SC - O(1)
