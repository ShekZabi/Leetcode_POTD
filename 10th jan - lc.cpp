class Solution {
public:
    int ans;

    void buildGraph(TreeNode* root,vector<vector<int>> & adj)
    {
        if(root==NULL)
        return ;


        if(root->left)
        {
        adj[root->val].push_back(root->left->val);
        adj[root->left->val].push_back(root->val);    
        }

        if(root->right)
        {
            adj[root->val].push_back(root->right->val);
            adj[root->right->val].push_back(root->val);
        }

        buildGraph(root->left,adj);
        buildGraph(root->right,adj);


    }


    void bfs(int start,vector<vector<int>> & adj,vector<bool>& vis)
    {
        queue<int> q;

        q.push(start);

        while(!q.empty())
        {
            int size = q.size();

            for(int i=0;i<size;i++)
            {
                int u = q.front();

                q.pop();

                vis[u]=1;

                for(int j=0;j<adj[u].size();j++)
                {
                    if(!vis[adj[u][j]])
                    q.push(adj[u][j]);
                }
            }

            ans++;
        }


    }


    int amountOfTime(TreeNode* root, int start) {

        vector<vector<int>> adj(100001);

        vector<bool> vis(100001);

        buildGraph(root,adj);

        ans=0;

        bfs(start,adj,vis);

        return ans-1;
        
    }
};
