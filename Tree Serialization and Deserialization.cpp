class Codec {
public:
    // Serialize: Perform level-order traversal and include null markers
    string serialize(TreeNode* root) {
        if (!root) return "null";

        queue<TreeNode*> q;
        q.push(root);
        stringstream ss;

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node) {
                ss << node->val << " ";
                q.push(node->left);
                q.push(node->right);
            } else {
                ss << "null ";
            }
        }
        return ss.str();
    }

    // Deserialize: Reconstruct the tree using level-order data
    TreeNode* deserialize(string data) {
        if (data == "null") return nullptr;

        stringstream ss(data);
        string val;
        vector<string> nodes;

        while (ss >> val) {
            nodes.push_back(val);
        }

        TreeNode* root = new TreeNode(stoi(nodes[0]));
        queue<TreeNode*> q;
        q.push(root);

        int i = 1;
        while (!q.empty() && i < nodes.size()) {
            TreeNode* node = q.front();
            q.pop();

            // Left child
            if (nodes[i] != "null") {
                node->left = new TreeNode(stoi(nodes[i]));
                q.push(node->left);
            }
            i++;

            // Right child
            if (i < nodes.size() && nodes[i] != "null") {
                node->right = new TreeNode(stoi(nodes[i]));
                q.push(node->right);
            }
            i++;
        }

        return root;
    }
};
