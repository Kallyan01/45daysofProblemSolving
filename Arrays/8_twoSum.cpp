class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int flag=0;
        std::vector<int> couple;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(i!=j &&  nums[i]+nums[j]==target)
                {
                    
                    couple.push_back(i);
                    couple.push_back(j);
                    flag=1;
                    if(flag==1) break;
                }
            }
            if(flag==1) break;
        }
        return couple;
    }
};