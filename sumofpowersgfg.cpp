class Solution {
public:
    vector<pair<int, int>> primeFactorization(int n) {
    vector<pair<int, int>> factors;
    
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                ++count;
            }
            factors.push_back({i, count});
        }
    }

    if (n > 1) {
        factors.push_back({n, 1});
    }

    return factors;
}

int sumOfPowers(int n) {
    vector<pair<int, int>> factors = primeFactorization(n);

    int sum = 0;
    for (const auto& factor : factors) {
        int prime = factor.first;
        int power = factor.second;
        sum += power;
    }

    return sum;
}


	int sumOfPowers(int a, int b){
	    
	    int ans=0;
	    
	    for(int i=a;i<=b;i++)
	    {
	        ans+=sumOfPowers(i);
	    }
	    
	    return ans;
	    // Code here
	}
};
