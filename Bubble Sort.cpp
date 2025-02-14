class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        for(int i=nums.size()-1;i >=0 ;i--)
        {
            bool didSwap = false;
            for(int j=0;j<i;j++)
            {
                if(nums[j] > nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                    didSwap = true;
                }
            }
            if(!didSwap)
            {
                break;
            }
        }
        return nums;
    }
};

//TC - O(n^2) Worst and Average , O(n) Best
//SC - O(1)
