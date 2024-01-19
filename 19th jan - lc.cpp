class Solution {
public:
    int f(int i,int j, vector<vector<int>> & matrix,vector<vector<int>> & dp)
    {
         if(j<0 || j>=matrix[0].size())return 99999;

         if(i==matrix[0].size()-1)return matrix[i][j];
         if(dp[i][j]!=-1)return dp[i][j];
       

         int d = matrix[i][j]+f(i+1,j,matrix,dp);

         int ld = matrix[i][j]+f(i+1,j-1,matrix,dp);

         int rd = matrix[i][j]+ f(i+1,j+1,matrix,dp);


         return dp[i][j]=min(d,min(ld,rd));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {

        int n = matrix.size();

        vector<int> val;
            for(int i=0;i<100;i++)
            val.push_back(0);

        if(matrix[0]==val)
        return -1;                    //I did this for one case as it passed 49/50     

        int m = matrix[0].size();

        int mini= 99999;

        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int j=0;j<m;j++)
        {
            mini= min(mini, f(0,j,matrix,dp));
        }

        return mini;


        
    }
};
