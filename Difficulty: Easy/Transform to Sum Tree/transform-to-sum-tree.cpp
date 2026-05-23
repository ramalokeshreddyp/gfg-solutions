class Solution {
  public:
    int solve(Node* root) {
        if (!root) return 0;
        
        int old = root->data;
        int left = solve(root->left);
        int right = solve(root->right);
        
        root->data = left + right;
        
        return root->data + old;
    }
    
    void toSumTree(Node *root) {
        solve(root);
    }
};