class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> output;
            vector<int> left;
            vector<int> right;
            
            
            for(int i=0;i<nums.size();i++)
            {
                int product=1;
                for(int j=0;j<i;j++)
                {
                    product*=nums[j];
                    
                }
                left.push_back(product);
            }
            for(int i=0;i<nums.size();i++)
            {
                int product=1;
                for(int j=i+1;j<nums.size();j++)
                {
                    product*=nums[j];
                }
                right.push_back(product);
            }
            for(int i=0;i<nums.size();i++)
            {
                output.push_back(left[i]*right[i]);
            }
            return output;
    }
};
