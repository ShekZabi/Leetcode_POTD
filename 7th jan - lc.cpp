class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
    
     int n = nums.size();
    int total_count = 0;
    vector<unordered_map<int, int>> dp(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            long long diff = (nums[i]) - (nums[j]);
            int count_j_diff = dp[j].count(diff) ? dp[j][diff] : 0;
            dp[i][diff] += count_j_diff + 1;
            total_count += count_j_diff;
        }
    }

    return total_count;


        
    }
};
