class Solution {
public:
    int ans=0;
    void dfs(TreeNode* root,int mx,int mn){
        if(root==NULL)
        return;

        mx = max(mx,root->val);
        mn= min(mn,root->val);

        ans = max(ans, abs(mx-mn));

        dfs(root->left,mx,mn);
        dfs(root->right,mx,mn);
    }
    int maxAncestorDiff(TreeNode* root) {

        dfs(root,root->val,root->val);
        return ans;
        
    }
};
