class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int val = -105;
        for(int i=0;i<nums.size();i++)
        {
         if(nums[i]==val)
         {
             nums.erase(nums.begin()+i);
             i--;
         }
            else val= nums[i];
        }
       
        return nums.size();
    }
};