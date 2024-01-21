class Solution {
public:
    int rob(vector<int>& nums) {

        int oddSum=0;
        int evenSum=0;

        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            evenSum= max(evenSum+nums[i],oddSum);


            else
            oddSum= max(evenSum,oddSum+nums[i]);
        }

        return max(evenSum,oddSum);
        
    }
};
