class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        
        vector<vector<int>> ans;
        
        int i;
        
        sort(arr.begin(),arr.end());
        
        do
        {
           ans.push_back(arr);
        }while(next_permutation(arr.begin(),arr.end()));
        
        
      
        return ans;
        // code here
    }
};
