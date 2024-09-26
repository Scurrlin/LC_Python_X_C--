#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> output;
        inorder(root, output);
        return output;
    }

private:
    void inorder(TreeNode* root, vector<int>& output) {
        if (root == nullptr) {
            return;
        }
        
        inorder(root->left, output);
        output.push_back(root->val);
        inorder(root->right, output);
    }
};

// Time Complexity:
// Space Complexity:

// Runtime1: 0ms, beats 100%
// Memory1: 10.08MB, beats 70.03%

// Runtime2:
// Memory2:

// Runtime3:
// Memory3: