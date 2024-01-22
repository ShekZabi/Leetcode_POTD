class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        unordered_map<int,int> m;
        vector<int> ans;

        int i;

        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;

            if(m[nums[i]]==2)
            {
                ans.push_back(nums[i]);
                set<int> s;

                for(int j=0;j<nums.size();j++)
                s.insert(nums[j]);

                int j=1;

                while(j<=nums.size())
                {
                    if(s.find(j)==s.end())
                    {
                    ans.push_back(j);
                    break;
                    }
                    j++;
                }
                return ans;
            }

            
        }

        return ans;
        
    }
};
