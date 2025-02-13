class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    int swap=nums[j];
                    nums[j]=nums[i];
                    nums[i]=swap;
                }
            }
        }
        return nums;
    }
};


//  Best,Worst,Average Time Complexity - O(n^2)
//  Space Complexity - O(1)
