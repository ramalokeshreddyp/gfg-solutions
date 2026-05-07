class Solution {
    bool same(Node* a, Node* b) {
        if (!a && !b) return true;
        if (!a || !b || a->data != b->data) return false;
        return same(a->left, b->left) && same(a->right, b->right);
    }

public:
    bool isSubTree(Node* root1, Node* root2) {
        if (!root2) return true;
        if (!root1) return false;
        
        if (same(root1, root2)) return true;
        
        return isSubTree(root1->left, root2) || 
               isSubTree(root1->right, root2);
    }
};