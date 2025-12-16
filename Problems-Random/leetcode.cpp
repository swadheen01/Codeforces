class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int t = target;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=0;i<nums.size(); i++)
        {
            int lo = i+1, hi= nums.size();
            while(lo<=hi)
            {
                int mid = (lo+hi)/2;
                if(nums[i]+nums[mid]==target)
                {
                    ans.push_back(i);
                    ans.push_back(mid);
                    return ans;
                }
                else if(nums[i]+nums[mid]>target)
                {
                    hi = mid;
                }
                else{
                    lo = mid + 1;
                }
            }
        }
    }
};