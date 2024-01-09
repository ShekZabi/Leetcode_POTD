class Solution {
public:
    void dfs(TreeNode* root,vector<int> & vec)
    {
        if(root==NULL)
        return ;

        if(root->left==NULL && root->right==NULL)
        vec.push_back(root->val);

        dfs(root->left,vec);
        dfs(root->right,vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> vec1,vec2;

        dfs(root1,vec1);
        dfs(root2,vec2);

        return vec1==vec2;
        
    }
};
