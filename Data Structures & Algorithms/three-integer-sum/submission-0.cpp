class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len=nums.size();
        set<vector<int>> result;
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                for(int k=j+1;k<len;k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                        vector<int> triplet={nums[i],nums[j],nums[k]};
                        sort(triplet.begin(),triplet.end());
                        result.insert(triplet);
                    }

                }
            }
        }
    return vector<vector<int>>(result.begin(),result.end());
    }
};
