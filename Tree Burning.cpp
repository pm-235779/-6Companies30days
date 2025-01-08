public:

   TreeNode* bfsToMapParents(TreeNode* root, map<TreeNode*, TreeNode*>& mpp, int start) {
    queue<TreeNode*> q;
    q.push(root);
    TreeNode* target = nullptr;

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        if (node->val == start) target = node;

        if (node->left) {
            mpp[node->left] = node;
            q.push(node->left);
        }

        if (node->right) {
            mpp[node->right] = node;
            q.push(node->right);
        }
    }

    return target;
}

int findMaxDistance(map<TreeNode*, TreeNode*>& mpp, TreeNode* target) {
    queue<TreeNode*> q;
    map<TreeNode*, int> vis;

    q.push(target);
    vis[target] = 1;
    int maxi = 0;

    while (!q.empty()) {
        int sz = q.size();
        int fl = 0;

        for (int i = 0; i < sz; i++) {
            TreeNode* node = q.front();
            q.pop();

            if (node->left && !vis[node->left]) {
                fl = 1;
                vis[node->left] = 1;
                q.push(node->left);
            }
            if (node->right && !vis[node->right]) {
                fl = 1;
                vis[node->right] = 1;
                q.push(node->right);
            }

            if (mpp[node] && !vis[mpp[node]]) {
                fl = 1;
                vis[mpp[node]] = 1;
                q.push(mpp[node]);
            }
        }

        if (fl) maxi++;
    }

    return maxi;
}

   
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*, TreeNode*> mpp;
    TreeNode* target = bfsToMapParents(root, mpp, start);
    int maxi = findMaxDistance(mpp, target);
    return maxi;
    }
};
