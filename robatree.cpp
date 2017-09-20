Solution {
public:
    int tryRob(TreeNode* root, int& l, int& r){
        if(root ==NULL) return 0;
        int ll=0, lr=0, rl=0, rr=0;
        l=tryRob(root->left, ll, lr);
        r=tryRob(root->right, rl, rr);
        return max(root->val + ll+ lr+ rl+ rr, l+r);
    }
    int rob(TreeNode* root) {
        int left, right;
        return tryRob(root, left, right);
    }
};
