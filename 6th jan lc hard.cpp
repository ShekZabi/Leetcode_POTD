class Solution {
public:
    int binarySearch(const vector<tuple<int, int, int>>& jobs, int index) {
    int low = 0, high = index - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (get<1>(jobs[mid]) <= get<0>(jobs[index])) {
            if (get<1>(jobs[mid + 1]) <= get<0>(jobs[index]))
                low = mid + 1;
            else
                return mid;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {

          vector<tuple<int, int, int>> jobs;
    int n = startTime.size();

    for (int i = 0; i < n; ++i) {
        jobs.push_back(make_tuple(startTime[i], endTime[i], profit[i]));
    }

    sort(jobs.begin(), jobs.end(), [](const auto& a, const auto& b) {
        return get<1>(a) < get<1>(b);
    });

    vector<int> dp(n, 0);
    dp[0] = get<2>(jobs[0]);

    for (int i = 1; i < n; ++i) {
        int prevJobIndex = binarySearch(jobs, i);
        int includedProfit = get<2>(jobs[i]) + (prevJobIndex != -1 ? dp[prevJobIndex] : 0);
        int excludedProfit = dp[i - 1];
        dp[i] = max(includedProfit, excludedProfit);
    }

    return dp[n - 1];
        
    }
};
